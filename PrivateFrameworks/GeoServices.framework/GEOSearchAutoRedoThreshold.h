
@interface GEOSearchAutoRedoThreshold : NSObject {
    unsigned long long  _numberOfVisiblePoisThreshold;
    double  _panDeltaThresholdInMeters;
    double  _zoomInPercentThreshold;
    double  _zoomOutPercentThreshold;
}

@property (nonatomic, readonly) unsigned long long numberOfVisiblePoisThreshold;
@property (nonatomic, readonly) double panDeltaThresholdInMeters;
@property (nonatomic, readonly) double zoomInPercentThreshold;
@property (nonatomic, readonly) double zoomOutPercentThreshold;

- (id)init;
- (id)initWithNumberOfVisiblePOIsThreshold:(unsigned long long)arg1 zoomInPercentThreshold:(double)arg2 zoomOutPercentThreshold:(double)arg3 panDeltaThresholdInMeters:(double)arg4;
- (id)initWithSearchAutoRedoThreshold:(id)arg1;
- (unsigned long long)numberOfVisiblePoisThreshold;
- (double)panDeltaThresholdInMeters;
- (double)zoomInPercentThreshold;
- (double)zoomOutPercentThreshold;

@end
