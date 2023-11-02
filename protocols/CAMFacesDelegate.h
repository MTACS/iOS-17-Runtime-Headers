
@protocol CAMFacesDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputFaceResults:(NSArray *)arg2 headResults:(NSArray *)arg3 bodyResults:(NSArray *)arg4 salientObjectResults:(NSArray *)arg5;

@end
