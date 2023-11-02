
@interface WiFiUsageLQMKernelSampleRxAmpdu : WiFiUsageLQMSample {
    double  _duration;
    unsigned long long  _rxAddBaReq;
    unsigned long long  _rxAmpdu;
    unsigned long long  _rxAmpduAll;
    unsigned long long  _rxBarOverRxAmpdu;
    unsigned long long  _rxDelBa;
    unsigned long long  _rxDup;
    unsigned long long  _rxHoles;
    unsigned long long  _rxMpduDensity;
    unsigned long long  _rxOos;
    unsigned long long  _rxOow;
    unsigned long long  _rxQueuedOverRxAmpdu;
    unsigned long long  _rxStuck;
    NSDate * _timestamp;
    unsigned long long  _txAddBaResp;
    unsigned long long  _txDelBa;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long rxAddBaReq;
@property (nonatomic) unsigned long long rxAmpdu;
@property (nonatomic) unsigned long long rxAmpduAll;
@property (nonatomic) unsigned long long rxBarOverRxAmpdu;
@property (nonatomic) unsigned long long rxDelBa;
@property (nonatomic) unsigned long long rxDup;
@property (nonatomic) unsigned long long rxHoles;
@property (nonatomic) unsigned long long rxMpduDensity;
@property (nonatomic) unsigned long long rxOos;
@property (nonatomic) unsigned long long rxOow;
@property (nonatomic) unsigned long long rxQueuedOverRxAmpdu;
@property (nonatomic) unsigned long long rxStuck;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic) unsigned long long txAddBaResp;
@property (nonatomic) unsigned long long txDelBa;

+ (id)featureFromFieldName:(id)arg1;
+ (id)sampleWithStruct:(struct apple80211_rx_ampdu_lqmct_stats { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; }*)arg1 WithReferenceDate:(id)arg2 AsNsec:(unsigned long long)arg3;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithStruct:(struct apple80211_rx_ampdu_lqmct_stats { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; }*)arg1 WithReferenceDate:(id)arg2 AsNsec:(unsigned long long)arg3;
- (unsigned long long)rxAddBaReq;
- (unsigned long long)rxAmpdu;
- (unsigned long long)rxAmpduAll;
- (unsigned long long)rxBarOverRxAmpdu;
- (unsigned long long)rxDelBa;
- (unsigned long long)rxDup;
- (unsigned long long)rxHoles;
- (unsigned long long)rxMpduDensity;
- (unsigned long long)rxOos;
- (unsigned long long)rxOow;
- (unsigned long long)rxQueuedOverRxAmpdu;
- (unsigned long long)rxStuck;
- (void)setDuration:(double)arg1;
- (void)setRxAddBaReq:(unsigned long long)arg1;
- (void)setRxAmpdu:(unsigned long long)arg1;
- (void)setRxAmpduAll:(unsigned long long)arg1;
- (void)setRxBarOverRxAmpdu:(unsigned long long)arg1;
- (void)setRxDelBa:(unsigned long long)arg1;
- (void)setRxDup:(unsigned long long)arg1;
- (void)setRxHoles:(unsigned long long)arg1;
- (void)setRxMpduDensity:(unsigned long long)arg1;
- (void)setRxOos:(unsigned long long)arg1;
- (void)setRxOow:(unsigned long long)arg1;
- (void)setRxQueuedOverRxAmpdu:(unsigned long long)arg1;
- (void)setRxStuck:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTxAddBaResp:(unsigned long long)arg1;
- (void)setTxDelBa:(unsigned long long)arg1;
- (id)timestamp;
- (unsigned long long)txAddBaResp;
- (unsigned long long)txDelBa;

@end
