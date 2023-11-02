
@protocol CAMZoomDelegate <NSObject>

@required

- (void)captureController:(CUCaptureController *)arg1 didChangePreviewZoomPIPRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)captureController:(CUCaptureController *)arg1 didChangeRampingVideoZoom:(bool)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputMinAvailableVideoZoomFactor:(double)arg2;
- (void)captureController:(CUCaptureController *)arg1 didOutputVideoZoomFactor:(double)arg2;

@end
