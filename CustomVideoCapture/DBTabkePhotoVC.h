//
//  DBTabkePhotoVC.h
//  CustomVideoCapture
//
//  Created by dengbin on 15/1/15.
//  Copyright (c) 2015年 IUAIJIA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface DBTabkePhotoVC : UIViewController
{
    
    
}
@property (strong,nonatomic) AVCaptureSession *captureSession;//负责输入和输出设备之间的数据传递
@property (strong,nonatomic) AVCaptureDeviceInput *captureDeviceInput;//负责从AVCaptureDevice获得输入数据
@property (strong,nonatomic) AVCaptureStillImageOutput *captureStillImageOutput;//照片输出流
@property (strong,nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;//相机拍摄预览图层
@property (strong, nonatomic) UIView *containerView;

typedef void(^PropertyChangeBlock)(AVCaptureDevice *captureDevice);
//@property (strong, nonatomic) IBOutlet UIButton *takeButton;//拍照按钮
//
//@property (strong, nonatomic) IBOutlet UIButton *flashAutoButton;//自动闪光灯按钮
//@property (strong, nonatomic) IBOutlet UIButton *flashOnButton;//打开闪光灯按钮
//@property (strong, nonatomic) IBOutlet UIButton *flashOffButton;//关闭闪光灯按钮
//
@property (strong, nonatomic) UIView *focusCursorView; //聚焦光标
@end