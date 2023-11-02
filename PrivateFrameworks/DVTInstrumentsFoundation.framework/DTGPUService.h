
@interface DTGPUService : DTXService <DTGPUDataSourceDelegate, DTGPUServiceAuthorizedAPI> {
    NSDictionary * _apsConfiguration;
    NSMutableDictionary * _collectingDataSources;
    NSMutableDictionary * _dataSourceDict;
    <DTGPUServiceDelegate> * _delegate;
    <NSObject> * _deviceObserver;
    bool  _enableConsistentPerfState;
    bool  _enableMultiSourceCounters;
    bool  _enableShaderProfiler;
    NSObject<OS_dispatch_source> * _heartbeatTimer;
    NSString * _importAPSDataPath;
    unsigned long long  _targetPerfState;
    NSObject<OS_dispatch_source> * _waitingForDeviceTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DTGPUServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;
+ (id)serviceName;

- (void).cxx_destruct;
- (void)_addGPU:(id)arg1;
- (void)_configureDataSourcesAndSendMessage:(id)arg1 counterProfile:(unsigned int)arg2 interval:(unsigned long long)arg3 windowLimit:(unsigned long long)arg4;
- (id)_constructMessagePayload:(const unsigned long long*)arg1 sampleCount:(unsigned long long)arg2 length:(unsigned long long)arg3 dataSource:(id)arg4 sampleType:(unsigned long long)arg5 ringBufferIndex:(unsigned int)arg6 sourceIndex:(unsigned int)arg7;
- (id)_findDataSourcesForTargetProcess:(int)arg1;
- (void)_removeGPU:(unsigned long long)arg1;
- (void)_resetAllDataSources;
- (void)_sendError:(id)arg1;
- (void)_sendErrorMessage:(id)arg1 code:(unsigned long long)arg2;
- (void)_sendMessage:(id)arg1;
- (void)_setupDataSources;
- (void)_startHeartbeatTimer;
- (void)_stopHeartbeatTimer;
- (void)_waitForProcessMetalDevice:(int)arg1 counterProfile:(unsigned int)arg2 interval:(unsigned long long)arg3 windowLimit:(unsigned long long)arg4;
- (void)configureAPS:(id)arg1;
- (void)configureCounters:(unsigned long long)arg1 counterProfile:(unsigned int)arg2 interval:(unsigned long long)arg3 windowLimit:(unsigned long long)arg4 tracingPID:(int)arg5;
- (id)currentConsistentGPUPerformanceState;
- (id)dataSourceFromGPUIndex:(unsigned long long)arg1;
- (id)delegate;
- (id)disableConsistentGPUPerformanceState:(unsigned long long)arg1;
- (bool)enableConsistentGPUPerformanceState:(unsigned long long)arg1 acceleratorID:(unsigned long long)arg2;
- (void)enableMultiSourceCounters;
- (void)enableShaderProfiler;
- (id)flushRemainingData;
- (void)importAPSData:(id)arg1;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)readyToSendData:(const unsigned long long*)arg1 sampleCount:(unsigned long long)arg2 length:(unsigned long long)arg3 dataSource:(id)arg4 sampleType:(unsigned long long)arg5 ringBufferIndex:(unsigned int)arg6 sourceIndex:(unsigned int)arg7;
- (id)requestDeviceGPUInfo;
- (void)setAPSCounterConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startCollectingCounters;
- (id)stopCollectingCounters;

@end
