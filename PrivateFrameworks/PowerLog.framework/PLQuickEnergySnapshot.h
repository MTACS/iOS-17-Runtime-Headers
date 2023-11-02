
@interface PLQuickEnergySnapshot : NSObject {
    double  _cpuEnergy;
    double  _networkEnergy;
    NSDate * _timestamp;
}

@property double cpuEnergy;
@property double networkEnergy;
@property (retain) NSDate *timestamp;

- (void).cxx_destruct;
- (double)computeEnergyDiff:(id)arg1;
- (double)cpuEnergy;
- (id)description;
- (double)getTotalEnergy;
- (id)initWithEnergies:(double)arg1 andNetworkEnergy:(double)arg2;
- (double)networkEnergy;
- (void)setCpuEnergy:(double)arg1;
- (void)setNetworkEnergy:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
