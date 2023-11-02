
@interface WiFiUsageLQMKernelSampleOfdmDesense : WiFiUsageLQMSample {
    unsigned long long  _bPhyDesense;
    NSString * _desenseReason;
    double  _duration;
    unsigned long long  _ofdmDesense;
    NSDate * _timestamp;
}

@property (nonatomic) unsigned long long bPhyDesense;
@property (nonatomic, retain) NSString *desenseReason;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long ofdmDesense;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)allLQMProperties;
+ (id)featureFromFieldName:(id)arg1;
+ (id)sampleWithStruct:(struct { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 andTimestamp:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)bPhyDesense;
- (id)desenseReason;
- (double)duration;
- (id)initWithStruct:(struct { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 andTimestamp:(id)arg2;
- (unsigned long long)ofdmDesense;
- (void)setBPhyDesense:(unsigned long long)arg1;
- (void)setDesenseReason:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setOfdmDesense:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
