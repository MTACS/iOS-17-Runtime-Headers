
@protocol AVTFaceTrackingManagerDelegate <NSObject>

@required

- (long long)interfaceOrientationForFaceTrackingManager:(AVTFaceTrackingManager *)arg1;

@optional

- (void)faceTrackingManager:(AVTFaceTrackingManager *)arg1 didUpdateUserInfoWithSize:(struct CGSize { double x1; double x2; })arg2;

@end
