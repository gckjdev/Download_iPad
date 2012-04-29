//
//  AppDelegate-iPad.h
//  Download
//
//  Created by gckj on 12-4-21.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CoreDataUtil.h"
#import "PPApplication.h"
#import "MobClick.h"
#import "PPTabBarController.h"
#import "ReviewRequest.h"
#import "WebViewTouchWindow.h"
#import "BookController.h"
#import "WallpaperController.h"
#import "MusicPlayController.h"
#import "VideoPlayController.h"
#import "DownloadService.h"

#define kAppId			@"488119325"					// To be changed for each project
#define kMobClickKey	@"4ec3d3045270151da9000026"		// To be changed for each project
#define kDbFileName     @"iPad_Download"

@interface AppDelegate_iPad : PPApplication <UIApplicationDelegate, UITabBarControllerDelegate, MobClickDelegate>
{
    UIBackgroundTaskIdentifier backgroundTask;

}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain)  PPTabBarController	*tabBarController;
@property (nonatomic, retain) CoreDataManager       *dataManager;
@property (nonatomic, retain) ReviewRequest         *reviewRequest;

- (void) setSeletedTabbarIndex:(NSInteger)index;
- (BOOL)hasMusicPlayerTab;
- (void) gotoMusicPlayerTab;
- (MusicPlayController*) getMusicPlayerTab;

- (BOOL)hasWallpaperTab;
- (void) gotoWallpaperTab;
- (WallpaperController*) getWallpaperTab;

- (BOOL)hasVideoPlayerTab;
- (void) gotoVideoPlayerTab;
- (VideoPlayController*) getVideoPlayerTab;

- (BOOL)hasBookTab;
- (void) gotoBookTab;
- (BookController*) getBookTab;
@end
