
@interface WiFiUsageLQMKernelSampleRC2Coex : WiFiUsageLQMSample {
    double  _duration;
    unsigned long long  _rc2DurationPerc;
    NSDate * _timestamp;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long rc2DurationPerc;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)sampleWithStruct:(struct rc2Coex { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 andTimestamp:(id)arg2;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithStruct:(struct rc2Coex { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 andTimestamp:(id)arg2;
- (unsigned long long)rc2DurationPerc;
- (void)setDuration:(double)arg1;
- (void)setRc2DurationPerc:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
