
@interface CBHIDPerformanceSummary : NSObject {
    CBDevice * _device;
    NSError * _error;
    double  _errorRate;
    double  _intervalSecondsExpected;
    double  _intervalSecondsMax;
    BOOL  _rssi;
}

@property (nonatomic, retain) CBDevice *device;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) double errorRate;
@property (nonatomic) double intervalSecondsExpected;
@property (nonatomic) double intervalSecondsMax;
@property (nonatomic) BOOL rssi;

- (void).cxx_destruct;
- (id)device;
- (id)error;
- (double)errorRate;
- (double)intervalSecondsExpected;
- (double)intervalSecondsMax;
- (BOOL)rssi;
- (void)setDevice:(id)arg1;
- (void)setError:(id)arg1;
- (void)setErrorRate:(double)arg1;
- (void)setIntervalSecondsExpected:(double)arg1;
- (void)setIntervalSecondsMax:(double)arg1;
- (void)setRssi:(BOOL)arg1;

@end
