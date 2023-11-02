
@interface ADDeviceKnowledgeManager : ADSingleton <BackgroundTaskDelegate> {
    NSNumber * _refreshInterval;
    bool  _taskIsRunning;
    ADBackgroundTaskRequest * _xpc_task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *refreshInterval;
@property (readonly) Class superclass;
@property (nonatomic) bool taskIsRunning;
@property (nonatomic, retain) ADBackgroundTaskRequest *xpc_task;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (id)init;
- (id)minimumRefreshInterval;
- (void)processDeviceData:(id /* block */)arg1;
- (id)refreshInterval;
- (bool)runTask:(id)arg1;
- (void)scheduleDeviceDataProcessing:(double)arg1;
- (void)setRefreshInterval:(id)arg1;
- (void)setTaskIsRunning:(bool)arg1;
- (void)setXpc_task:(id)arg1;
- (bool)taskIsRunning;
- (id)xpc_task;

@end
