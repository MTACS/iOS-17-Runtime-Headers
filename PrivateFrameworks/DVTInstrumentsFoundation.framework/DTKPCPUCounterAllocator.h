
@interface DTKPCPUCounterAllocator : NSObject {
    unsigned long long  _configurableCounterCount;
    DTKPCPU * _cpu;
    NSMutableArray * _eventRecords;
    unsigned long long  _eventsUniqueIds;
    unsigned long long  _fixedCounterCount;
    struct kpep_config { } * _kpepConfig;
    DTKPCPUCounterAllocatorRecord * _pmiEvent;
    unsigned long long  _pmiThreshold;
}

@property (nonatomic, readonly, retain) DTKPCPUCounterAllocatorRecord *allocatedPMIRecord;
@property (nonatomic, readonly, retain) DTKPCPU *cpu;
@property (nonatomic, readonly) unsigned int kpcClasses;
@property (nonatomic, readonly) unsigned long long pmcEventCount;
@property (nonatomic, readonly) bool pmiEnabled;
@property (nonatomic, readonly) unsigned long long pmiThreshold;

- (void).cxx_destruct;
- (unsigned long long)_counterIndexForEvent:(id)arg1 absolute:(bool)arg2 error:(id*)arg3;
- (id)_counterNameForEvent:(id)arg1 error:(id*)arg2;
- (void)_enumerateAllocatedPMCsWithIndex:(id /* block */)arg1;
- (bool)_eventExists:(id)arg1 eventOut:(id*)arg2;
- (unsigned int)_getCurrentClasses:(id*)arg1;
- (unsigned long long)_hardwareEventCount;
- (bool)_matchesPMIEvent:(id)arg1;
- (int)_setErrorFromKpepError:(int)arg1 eventName:(id)arg2 error:(id*)arg3;
- (int)addPMCEventName:(id)arg1 error:(id*)arg2;
- (id)allocatedPMIRecord;
- (int)configureHardwareCounters:(id*)arg1;
- (int)configureHardwarePMIPeriods:(id*)arg1;
- (int)configurePMIActionID:(unsigned int)arg1 error:(id*)arg2;
- (id)cpu;
- (void)dealloc;
- (void)enumerateAllocatedPMCs:(id /* block */)arg1;
- (int)forceCounters:(id*)arg1;
- (id)initWithCPU:(id)arg1 error:(id*)arg2;
- (unsigned int)kpcClasses;
- (unsigned long long)pmcEventCount;
- (bool)pmiEnabled;
- (unsigned long long)pmiThreshold;
- (unsigned long long)recordConfigWordsIntoBuffer:(unsigned long long*)arg1;
- (int)setPMIEventName:(id)arg1 pmiThreshold:(unsigned long long)arg2 error:(id*)arg3;
- (int)startHardwareCounters:(id*)arg1;
- (int)stopHardwareCounters:(id*)arg1;
- (int)unforceCounters:(id*)arg1;

@end
