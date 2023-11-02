
@interface DTSysmonTapLocalDelegate : NSObject <DTTapLocalDelegate> {
    NSArray * _coalitionAttributes;
    unsigned long long  _coalitionLastSampleTime;
    NSObject<OS_sysmon_request> * _coalitionRequest;
    NSMutableDictionary * _coalitionsAtWindowBeginning;
    NSDictionary * _coalitionsFromLastSample;
    DTSysmonTapConfig * _config;
    unsigned int  _cpuCount;
    unsigned long long  _effectiveWindowSize;
    bool  _isWindowed;
    unsigned long long  _lastWindowPurgeTime;
    NSMutableDictionary * _newAttributesSample;
    NSSet * _pidFilter;
    NSObject<OS_dispatch_source> * _pollTimer;
    NSArray * _processAttributes;
    unsigned long long  _processLastSampleTime;
    NSObject<OS_sysmon_request> * _processRequest;
    NSMutableDictionary * _processesAtWindowBeginning;
    NSDictionary * _processesFromLastSample;
    unsigned long long  _purgeEveryNTicks;
    NSMutableArray * _samples;
    NSObject<OS_dispatch_semaphore> * _samplesLock;
    struct processor_cpu_load_info { unsigned int x1[4]; } * _savedTicks;
    NSObject<OS_dispatch_queue> * _serialQ;
    bool  _stopWasCalled;
    NSMutableDictionary * _systemAtWindowBeginning;
    NSArray * _systemAttributes;
    unsigned long long  _systemLastSampleTime;
    NSObject<OS_sysmon_request> * _systemRequest;
    DTTapLocal * _tap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCPUUsageToSample:(id)arg1;
- (void)_addSample:(id)arg1;
- (void)_createAttributesSample;
- (id)_getSessionMetadata;
- (void)_handleSysmonCoalitionTable:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
- (void)_handleSysmonProcessTable:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
- (void)_handleSysmonSystemTable:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
- (void)_purgeOldSamplesForCurrentTime:(unsigned long long)arg1;
- (bool)canFetchWhileArchiving;
- (void)dealloc;
- (void)fetchDataForReason:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)initWithConfig:(id)arg1;
- (void)pause;
- (void)setTap:(id)arg1;
- (void)start;
- (void)stop;
- (void)unpause;
- (id)validateConfig;

@end
