//
//  ViewController.h
//  Crystal Ball
//
//  Created by Sean Everett on 1/2/13.
//  Copyright (c) 2013 Sean Everett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
}

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;
@property (strong, nonatomic) UIImageView *imageView;

- (void) makePrediction;

@end
