
@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject {
    bool  _didHandleInitialPinch;
    PXInitialHysteresisNumberFilter * _initialDirectionFilter;
    bool  _isTrackingPinch;
    double  _lastDirection;
    PXChangeDirectionNumberFilter * _scaleDirectionFilter;
}

@property (nonatomic, readonly) bool isTrackingPinch;

- (void).cxx_destruct;
- (void)filterPinchGestureWithScale:(double)arg1 initialPinchHandler:(id /* block */)arg2 subsequentDirectionChangeHandler:(id /* block */)arg3;
- (id)init;
- (bool)isTrackingPinch;
- (void)reset;

@end
