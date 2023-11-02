
@protocol CAMCameraRollControllerImageWellDelegate <NSObject>

@required

- (void)cameraRollController:(CAMCameraRollController *)arg1 didChangeImageWellImage:(UIImage *)arg2 withUUID:(NSString *)arg3 animated:(bool)arg4;

@end
