
@interface ENBeaconCountMetrics : NSObject {
    unsigned long long  _beaconCountWindowCount;
    unsigned long long * _beaconCountWindows;
    unsigned long long  _currentInsertionWindowIndex;
    NSMutableSet * _currentInsertionWindowObservedRPI;
    NSDate * _endDate;
    double  _previousTimestamp;
    NSDate * _startDate;
    double  _windowDuration;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) double windowDuration;

- (void).cxx_destruct;
- (void)addAdvertisement:(id)arg1;
- (unsigned long long)beaconCountAtDate:(id)arg1;
- (void)dealloc;
- (id)differentialPrivacyRepresentationWithCountThresholds:(id)arg1;
- (id)endDate;
- (void)enumerateBeaconCountWindows:(id /* block */)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 windowDuration:(double)arg3;
- (id)startDate;
- (double)windowDuration;

@end
