
@protocol BWFigVideoCaptureDeviceManualCinematicFramingDelegate <NSObject>

@required

- (double)manualFramingVideoZoomFactor;
- (void)panWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)performOneShotFraming;
- (void)resetFraming;
- (void)setManualFramingVideoZoomFactor:(double)arg1;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
