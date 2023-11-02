
@interface ASVWorldGestureDragOffsetCorrector : NSObject {
    void _initialDragOffset;
    double  _startTime;
    void _thresholdDragOffset;
}

@property (nonatomic) void initialDragOffset;
@property (nonatomic) double startTime;
@property (nonatomic) void thresholdDragOffset;

- (void)currentDragOffset;
- (id)initWithInitialDragOffsetthresholdDragOffset;
- (void)initialDragOffset;
- (void)setInitialDragOffset;
- (void)setStartTime:(double)arg1;
- (void)setThresholdDragOffset;
- (double)startTime;
- (void)thresholdDragOffset;

@end
