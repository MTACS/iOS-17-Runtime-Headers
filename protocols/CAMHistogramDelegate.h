
@protocol CAMHistogramDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didOutputHistogramResult:(CAMHistogramResult *)arg2;

@end
