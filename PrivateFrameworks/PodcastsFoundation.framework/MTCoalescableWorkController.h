
@interface MTCoalescableWorkController : NSObject {
    MTCoalescableWorkManifest * _activeWorkManifest;
    NSString * _identifier;
    MTCoalescableWorkManifest * _pendingWorkManifest;
    unsigned int  _qosClass;
    bool  _verboseDebugLoggingEnabled;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) MTCoalescableWorkManifest *activeWorkManifest;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) MTCoalescableWorkManifest *pendingWorkManifest;
@property (nonatomic) unsigned int qosClass;
@property (nonatomic) bool verboseDebugLoggingEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_uniqueGenericIdentifier;
+ (id)controllerWithQosClass:(unsigned int)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (void)_onWorkQueuePerformActiveWorkBlock;
- (void)_syncScheduleStartActiveWork:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_syncScheduleUpdatePendingWork:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)activeWorkManifest;
- (id)description;
- (id)identifier;
- (id)initWithWorkQueue:(id)arg1 identifier:(id)arg2;
- (id)pendingWorkManifest;
- (unsigned int)qosClass;
- (void)schedule:(id /* block */)arg1;
- (void)schedule:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setActiveWorkManifest:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPendingWorkManifest:(id)arg1;
- (void)setQosClass:(unsigned int)arg1;
- (void)setVerboseDebugLoggingEnabled:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)verboseDebugLoggingEnabled;
- (id)workQueue;

@end
