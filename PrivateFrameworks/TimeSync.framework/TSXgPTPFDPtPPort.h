
@interface TSXgPTPFDPtPPort : TSXgPTPNetworkPort {
    BOOL  _localPDelayLogMeanInterval;
    bool  _measuringPDelay;
    bool  _multipleRemotes;
    BOOL  _remotePDelayLogMeanInterval;
    TSXgPTPPortStatistics * _statistics;
}

@property (nonatomic) BOOL localPDelayLogMeanInterval;
@property (nonatomic) bool measuringPDelay;
@property (nonatomic) bool multipleRemotes;
@property (nonatomic) BOOL remotePDelayLogMeanInterval;
@property (nonatomic, retain) TSXgPTPPortStatistics *statistics;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)arg1;
- (BOOL)localPDelayLogMeanInterval;
- (bool)measuringPDelay;
- (bool)multipleRemotes;
- (BOOL)remotePDelayLogMeanInterval;
- (void)setLocalPDelayLogMeanInterval:(BOOL)arg1;
- (void)setMeasuringPDelay:(bool)arg1;
- (void)setMultipleRemotes:(bool)arg1;
- (void)setRemotePDelayLogMeanInterval:(BOOL)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;

@end
