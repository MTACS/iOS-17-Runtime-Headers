
@protocol FigScreenCaptureFrameHandlerDelegate <NSObject>

@required

- (void)screenCaptureController:(FigScreenCaptureController *)arg1 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 transformFlags:(unsigned long long)arg3;

@optional

- (void)screenCaptureController:(FigScreenCaptureController *)arg1 didFailWithStatus:(int)arg2;
- (void)screenCaptureControllerDidReceiveClearScreen:(FigScreenCaptureController *)arg1;
- (void)screenCaptureControllerMediaServicesWereReset:(FigScreenCaptureController *)arg1;
- (void)screenCaptureControllerWasPreempted:(FigScreenCaptureController *)arg1;

@end
