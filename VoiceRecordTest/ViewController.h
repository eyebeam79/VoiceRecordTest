//
//  ViewController.h
//  VoiceRecordTest
//
//  Created by SDT1 on 2014. 1. 16..
//  Copyright (c) 2014년 SDT1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AVAudioRecorderDelegate>
@property (strong, nonatomic) IBOutlet UITableView *table;
@property (strong, nonatomic) IBOutlet UILabel *status;

- (IBAction)togleRecording:(id)sender;
@end
