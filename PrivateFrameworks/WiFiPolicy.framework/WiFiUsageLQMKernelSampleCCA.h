
@interface WiFiUsageLQMKernelSampleCCA : WiFiUsageLQMSample {
    double  _duration;
    unsigned long long  _interference;
    unsigned long long  _interferenceSleepPerc;
    unsigned long long  _interferenceWakePerc;
    unsigned long long  _otherCca;
    unsigned long long  _otherCcaSleepPerc;
    unsigned long long  _otherCcaWakePerc;
    unsigned long long  _selfCca;
    unsigned long long  _selfCcaSleepPerc;
    unsigned long long  _selfCcaWakePerc;
    NSDate * _timestamp;
}

@property (nonatomic) double duration;
@property (nonatomic, readonly) unsigned long long interference;
@property (nonatomic, readonly) unsigned long long interferenceSleepPerc;
@property (nonatomic, readonly) unsigned long long interferenceWakePerc;
@property (nonatomic, readonly) unsigned long long otherCca;
@property (nonatomic, readonly) unsigned long long otherCcaSleepPerc;
@property (nonatomic, readonly) unsigned long long otherCcaWakePerc;
@property (nonatomic, readonly) unsigned long long selfCca;
@property (nonatomic, readonly) unsigned long long selfCcaSleepPerc;
@property (nonatomic, readonly) unsigned long long selfCcaWakePerc;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)sampleWithStruct:(struct ccaStats { unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; }*)arg1 andTimestamp:(id)arg2;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithStruct:(struct ccaStats { unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned short x13; }*)arg1 andTimestamp:(id)arg2;
- (unsigned long long)interference;
- (unsigned long long)interferenceSleepPerc;
- (unsigned long long)interferenceWakePerc;
- (unsigned long long)otherCca;
- (unsigned long long)otherCcaSleepPerc;
- (unsigned long long)otherCcaWakePerc;
- (unsigned long long)selfCca;
- (unsigned long long)selfCcaSleepPerc;
- (unsigned long long)selfCcaWakePerc;
- (void)setDuration:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
