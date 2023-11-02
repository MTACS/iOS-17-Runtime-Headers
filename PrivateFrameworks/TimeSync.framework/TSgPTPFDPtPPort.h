
@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {
    TSDgPTPFDPtPPort * _implDC;
    TSXgPTPFDPtPPort * _implXPC;
    TSgPTPPortStatistics * _statistics;
}

@property (nonatomic, readonly) BOOL localPDelayLogMeanInterval;
@property (nonatomic, readonly) bool measuringPDelay;
@property (nonatomic, readonly) bool multipleRemotes;
@property (nonatomic, readonly) BOOL remotePDelayLogMeanInterval;
@property (nonatomic, retain) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;
+ (id)keyPathsForValuesAffectingLocalPDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingMeasuringPDelay;
+ (id)keyPathsForValuesAffectingMultipleRemotes;
+ (id)keyPathsForValuesAffectingRemotePDelayLogMeanInterval;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;
- (BOOL)localPDelayLogMeanInterval;
- (bool)measuringPDelay;
- (bool)multipleRemotes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)remotePDelayLogMeanInterval;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (void)updateWithXPCStatistics:(id)arg1;

@end
