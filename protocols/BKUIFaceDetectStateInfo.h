
@protocol BKUIFaceDetectStateInfo <NSObject>

@required

- (bool)faceDetected;
- (bool)flare;
- (bool)glassesMismatch;
- (bool)multipleFaces;
- (bool)occlusion;
- (unsigned long long)orientation;
- (bool)partiallyOutOfView;
- (NSNumber *)pitch;
- (NSNumber *)roll;
- (bool)tooCloseToCamera;
- (bool)tooFarFromCamera;
- (bool)unsupportedGlasses;
- (NSNumber *)yaw;

@end
