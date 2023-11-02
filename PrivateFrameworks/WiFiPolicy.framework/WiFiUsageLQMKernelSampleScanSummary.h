
@interface WiFiUsageLQMKernelSampleScanSummary : WiFiUsageLQMSample {
    double  _duration;
    NSString * _scanClient;
    unsigned long long  _scanDurationMS;
    NSDate * _timestamp;
}

@property (nonatomic) double duration;
@property (nonatomic, retain) NSString *scanClient;
@property (nonatomic) unsigned long long scanDurationMS;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)allLQMProperties;
+ (id)featureFromFieldName:(id)arg1;
+ (id)sampleWithStruct:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 andTimestamp:(id)arg2;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithStruct:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 andTimestamp:(id)arg2;
- (id)scanClient;
- (unsigned long long)scanDurationMS;
- (void)setDuration:(double)arg1;
- (void)setScanClient:(id)arg1;
- (void)setScanDurationMS:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
