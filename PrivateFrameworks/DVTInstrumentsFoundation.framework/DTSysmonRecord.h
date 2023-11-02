
@interface DTSysmonRecord : NSObject {
    NSArray * _changedProcesses;
    NSArray * _coalitionAttributes;
    NSArray * _coalitions;
    DTSysmonCPUUsageRecord * _cpuUsage;
    NSArray * _deadCoalitions;
    NSArray * _deadProcesses;
    unsigned long long  _endTimestamp;
    NSArray * _processAttributes;
    unsigned int  _recordType;
    unsigned long long  _startTimestamp;
    DTSysmonSystemRecord * _system;
    NSArray * _systemAttributes;
}

@property (nonatomic, retain) NSArray *changedProcesses;
@property (nonatomic, retain) NSArray *coalitionAttributes;
@property (nonatomic, retain) NSArray *coalitions;
@property (nonatomic, retain) DTSysmonCPUUsageRecord *cpuUsage;
@property (nonatomic, retain) NSArray *deadCoalitions;
@property (nonatomic, retain) NSArray *deadProcesses;
@property (nonatomic) unsigned long long endTimestamp;
@property (nonatomic, retain) NSArray *processAttributes;
@property (nonatomic) unsigned int recordType;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic, retain) DTSysmonSystemRecord *system;
@property (nonatomic, retain) NSArray *systemAttributes;

- (void).cxx_destruct;
- (id)changedProcesses;
- (id)coalitionAttributes;
- (id)coalitions;
- (id)cpuUsage;
- (id)deadCoalitions;
- (id)deadProcesses;
- (unsigned long long)endTimestamp;
- (id)processAttributes;
- (unsigned int)recordType;
- (void)setChangedProcesses:(id)arg1;
- (void)setCoalitionAttributes:(id)arg1;
- (void)setCoalitions:(id)arg1;
- (void)setCpuUsage:(id)arg1;
- (void)setDeadCoalitions:(id)arg1;
- (void)setDeadProcesses:(id)arg1;
- (void)setEndTimestamp:(unsigned long long)arg1;
- (void)setProcessAttributes:(id)arg1;
- (void)setRecordType:(unsigned int)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setSystem:(id)arg1;
- (void)setSystemAttributes:(id)arg1;
- (unsigned long long)startTimestamp;
- (id)system;
- (id)systemAttributes;

@end
