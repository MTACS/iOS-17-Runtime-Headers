
@interface PLCPUEnergySnapshot : NSObject {
    unsigned long long  _cpuEnergy;
    unsigned long long  _cpuEnergyBilledToMe;
    unsigned long long  _cpuEnergyBilledToOthers;
    NSMutableDictionary * _mockData;
}

@property unsigned long long cpuEnergy;
@property unsigned long long cpuEnergyBilledToMe;
@property unsigned long long cpuEnergyBilledToOthers;
@property (retain) NSMutableDictionary *mockData;

+ (id)coalitionIDToCoalitionNameMapping;
+ (id)identifierToAccountingName;
+ (id)identifierToCoalitionID;
+ (void)setCoalitionIDToCoalitionNameMapping:(id)arg1;
+ (void)setIdentifierToAccountingName:(id)arg1;
+ (void)setIdentifierToCoalitionID:(id)arg1;

- (void).cxx_destruct;
- (double)computeEnergyDiff:(id)arg1;
- (double)computeEnergyDiffUntilNow:(id)arg1 andAdjustSnapshotToNow:(bool)arg2;
- (unsigned long long)cpuEnergy;
- (unsigned long long)cpuEnergyBilledToMe;
- (unsigned long long)cpuEnergyBilledToOthers;
- (id)description;
- (id)getCoalitionIDForIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andMockData:(id)arg2;
- (bool)isValid;
- (id)mockData;
- (void)refreshCoalitionIDMapping;
- (id)searchCoalitionsCacheForID:(id)arg1;
- (void)setCpuEnergy:(unsigned long long)arg1;
- (void)setCpuEnergyBilledToMe:(unsigned long long)arg1;
- (void)setCpuEnergyBilledToOthers:(unsigned long long)arg1;
- (void)setMockData:(id)arg1;
- (bool)snapshotCPUEnergy:(id)arg1;

@end
