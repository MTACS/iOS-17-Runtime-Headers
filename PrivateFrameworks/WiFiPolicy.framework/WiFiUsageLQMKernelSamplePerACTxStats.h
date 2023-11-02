
@interface WiFiUsageLQMKernelSamplePerACTxStats : WiFiUsageLQMSample {
    double  _duration;
    NSDate * _timestamp;
}

@property (nonatomic) double duration;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)sampleWithTimestamp:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)initWithTimestamp:(id)arg1;
- (void)populateTXStats:(int)arg1 With:(unsigned int)arg2 ForQueue:(int)arg3;
- (void)setDuration:(double)arg1;
- (id)timestamp;
- (void)transformTXStats;

@end
