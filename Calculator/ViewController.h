//
//  ViewController.h
//  Calculator
//
//  Created by Eude Kinsley Lesperance on 11/25/14.
//  Copyright (c) 2014 Qlovur. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int total;
    int mode;
    NSString *valueString;
    IBOutlet UILabel *label;
    BOOL lastButtonWasMode;
}

- (IBAction)tappedClear:(id)sender;
- (IBAction)tappedNumber:(UIButton* )btn;
- (IBAction)tappedPlus:(id)sender;
- (IBAction)tappedMinus:(id)sender;
- (IBAction)tappedMultiply:(id)sender;
- (IBAction)tappedEquals:(id)sender;

@end

