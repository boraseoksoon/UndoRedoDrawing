//  Created by SeoksoonJang on 5/1/15.
//  Copyright (c) 2015 SeoksoonJang. All rights reserved.
//
// https://github.com/boraseoksoon/TLTalk
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION

#import <UIKit/UIKit.h>
@class SWFrameButton;

// Prototol for delegate
@protocol DrawToolViewControllerDelegate <NSObject>
@required
-(void)didEraseAll;
-(void)didDrawModeOn;
-(void)didDrawModeOff;
-(void)didChangeToBlueColor;
-(void)didChangeToRedColor;
@end

@interface DrawToolViewController : UIViewController{
    BOOL isRedColorDrawModeOn;
    BOOL isBlueColorDrawModeOn;
    SWFrameButton *redButton;
    SWFrameButton *blueButton;
}

/********************************************************************
 Properties
 ********************************************************************/
@property (strong, nonatomic) IBOutlet UISwitch *drawModeSwitch;
// delegate
@property (assign, nonatomic) id <DrawToolViewControllerDelegate> delegate;


/********************************************************************
 IBActions
 ********************************************************************/
- (IBAction)goToDevelopersGitHubAction:(id)sender;
- (IBAction)drawModeSwitchAction:(id)sender;


@end
