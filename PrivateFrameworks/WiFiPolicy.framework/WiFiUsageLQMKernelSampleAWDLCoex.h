
@interface WiFiUsageLQMKernelSampleAWDLCoex : WiFiUsageLQMSample {
    unsigned long long  _awdlActiveDurationPerc;
    double  _duration;
    NSDate * _timestamp;
}

@property (nonatomic) unsigned long long awdlActiveDurationPerc;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)sampleWithStruct:(struct awdlInfo { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 andTimestamp:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)awdlActiveDurationPerc;
- (double)duration;
- (id)initWithStruct:(struct awdlInfo { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 andTimestamp:(id)arg2;
- (void)setAwdlActiveDurationPerc:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
