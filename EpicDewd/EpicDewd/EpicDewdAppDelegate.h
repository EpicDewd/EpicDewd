//
//  EpicDewdAppDelegate.h
//  EpicDewd
//
//  Created by EpicDewd on 5/7/11.
//  Copyright 2011 EpicDewd. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface EpicDewdAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
