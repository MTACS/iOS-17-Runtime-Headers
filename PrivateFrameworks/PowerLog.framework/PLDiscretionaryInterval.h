
@interface PLDiscretionaryInterval : NSObject {
    PLCPUEnergySnapshot * _cpuEnergySnapshot;
    NSDate * _currentStartDate;
    NSDate * _endDate;
    PLNetworkUsageSnapshot * _networkEnergySnapshot;
    double  _openCount;
    NSDate * _originalStartDate;
    double  _startCount;
}

@property (retain) PLCPUEnergySnapshot *cpuEnergySnapshot;
@property (retain) NSDate *currentStartDate;
@property (retain) NSDate *endDate;
@property (retain) PLNetworkUsageSnapshot *networkEnergySnapshot;
@property double openCount;
@property (retain) NSDate *originalStartDate;
@property double startCount;

- (void).cxx_destruct;
- (double)checkOpenIntervalDuration:(id)arg1;
- (void)closeInterval;
- (id)cpuEnergySnapshot;
- (id)currentStartDate;
- (id)description;
- (id)endDate;
- (id)initWithIdentifier:(id)arg1 andInfo:(id)arg2 andSnapshottingEnabled:(bool)arg3 andMockData:(id)arg4;
- (bool)isClosed;
- (id)networkEnergySnapshot;
- (double)openCount;
- (id)originalStartDate;
- (void)setCpuEnergySnapshot:(id)arg1;
- (void)setCurrentStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setNetworkEnergySnapshot:(id)arg1;
- (void)setOpenCount:(double)arg1;
- (void)setOriginalStartDate:(id)arg1;
- (void)setStartCount:(double)arg1;
- (bool)shouldClose;
- (double)startCount;

@end
