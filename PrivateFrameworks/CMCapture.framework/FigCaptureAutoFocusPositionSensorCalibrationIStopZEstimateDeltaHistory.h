
@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject {
    int  _currentIStopZEstimate;
    int  _currentIStopZEstimateDelta;
    int  _lastPassingIStopZEstimateDelta;
    int  _previousIStopZEstimate;
    int  _previousIStopZEstimateDelta;
}

@property (nonatomic) int currentIStopZEstimateDelta;
@property (nonatomic) int lastPassingIStopZEstimateDelta;
@property (nonatomic) int previousIStopZEstimateDelta;

- (int)currentIStopZEstimateDelta;
- (int)lastPassingIStopZEstimateDelta;
- (int)previousIStopZEstimateDelta;
- (void)setCurrentIStopZEstimateDelta:(int)arg1;
- (void)setLastPassingIStopZEstimateDelta:(int)arg1;
- (void)setPreviousIStopZEstimateDelta:(int)arg1;

@end
