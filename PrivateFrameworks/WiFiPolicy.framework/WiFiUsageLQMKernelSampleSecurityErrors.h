
@interface WiFiUsageLQMKernelSampleSecurityErrors : WiFiUsageLQMSample {
    double  _duration;
    unsigned long long  _rxUcastReplayError;
    unsigned long long  _rxmcastDecryptError;
    unsigned long long  _rxmcastReplayError;
    unsigned long long  _rxucastDecryptError;
    NSDate * _timestamp;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long rxUcastReplayError;
@property (nonatomic) unsigned long long rxmcastDecryptError;
@property (nonatomic) unsigned long long rxmcastReplayError;
@property (nonatomic) unsigned long long rxucastDecryptError;
@property (nonatomic, retain) NSDate *timestamp;

+ (id)featureFromFieldName:(id)arg1;
+ (id)sampleWithStruct:(struct rxSecurityInfo { unsigned int x1; int x2; int x3; int x4; int x5; }*)arg1 andTimestamp:(id)arg2;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithStruct:(struct rxSecurityInfo { unsigned int x1; int x2; int x3; int x4; int x5; }*)arg1 andTimestamp:(id)arg2;
- (unsigned long long)rxUcastReplayError;
- (unsigned long long)rxmcastDecryptError;
- (unsigned long long)rxmcastReplayError;
- (unsigned long long)rxucastDecryptError;
- (void)setDuration:(double)arg1;
- (void)setRxUcastReplayError:(unsigned long long)arg1;
- (void)setRxmcastDecryptError:(unsigned long long)arg1;
- (void)setRxmcastReplayError:(unsigned long long)arg1;
- (void)setRxucastDecryptError:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
