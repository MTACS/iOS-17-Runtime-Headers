
@protocol PearlCameraInterfaceMessaging

@required

- (void)cameraActivityNotification:(int)arg1 data:(union { struct AWFaceDetectMetadata { bool x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; unsigned long long x_1_1_5; double x_1_1_6; unsigned long long x_1_1_7; double x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10[16]; } x1; int x2; int x3; int x4; }*)arg2 forOperation:(id)arg3;

@end
