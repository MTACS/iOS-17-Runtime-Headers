
@interface WiFiUsageLQMKernelSampleBTCoex : WiFiUsageLQMSample {
    unsigned long long  _btAntennaDurationPerc;
    double  _duration;
    NSDate * _timestamp;
}

@property (nonatomic) unsigned long long btAntennaDurationPerc;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)sampleWithStruct:(struct btInfo { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 andTimestamp:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)btAntennaDurationPerc;
- (double)duration;
- (id)initWithStruct:(struct btInfo { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 andTimestamp:(id)arg2;
- (void)setBtAntennaDurationPerc:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
