//
//  LetterTilesAppDelegate.h
//  LetterTiles
//
//  Created by Derek Ledbetter on 12/18/11.
//  Copyright © 2011 Derek Ledbetter. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LetterTilesViewController;

@interface LetterTilesAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet LetterTilesViewController *viewController;

@end
