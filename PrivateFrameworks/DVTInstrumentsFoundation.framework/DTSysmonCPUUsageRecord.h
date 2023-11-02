
@interface DTSysmonCPUUsageRecord : NSObject {
    DTSysmonCPUUsageEntry * _averageCPUUsage;
    unsigned int  _cpuCount;
    unsigned int  _enabledCPUs;
    NSArray * _perCPUUsage;
}

@property (nonatomic, retain) DTSysmonCPUUsageEntry *averageCPUUsage;
@property (nonatomic) unsigned int cpuCount;
@property (nonatomic) unsigned int enabledCPUs;
@property (nonatomic, retain) NSArray *perCPUUsage;

- (void).cxx_destruct;
- (id)averageCPUUsage;
- (unsigned int)cpuCount;
- (unsigned int)enabledCPUs;
- (id)perCPUUsage;
- (void)setAverageCPUUsage:(id)arg1;
- (void)setCpuCount:(unsigned int)arg1;
- (void)setEnabledCPUs:(unsigned int)arg1;
- (void)setPerCPUUsage:(id)arg1;

@end
