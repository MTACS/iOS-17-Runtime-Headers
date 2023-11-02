
@interface MLRExtensionRemoteContext : NSExtensionContext <MLRExtensionRemoteProtocol> {
    <MLRTaskPerforming> * _plugin;
    NSObject<OS_dispatch_queue> * _stopQueue;
    NSObject<OS_os_transaction> * _stopTransaction;
    NSObject<OS_dispatch_queue> * _taskExecutionQueue;
    NSObject<OS_os_transaction> * _taskTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MLRTaskPerforming> *plugin;
@property (nonatomic, retain) NSObject<OS_os_transaction> *stopTransaction;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_os_transaction> *taskTransaction;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)createDodMLServer;
- (id)createMLRTrialTaskWithTask:(id)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 plugin:(id)arg4;
- (bool)loadPluginIfNecessaryWithError:(id*)arg1;
- (void)performDodMLTask:(id)arg1 sandBoxExtensions:(id)arg2 completion:(id /* block */)arg3;
- (void)performSynchronouslyDodMLTask:(id)arg1 sandBoxExtensions:(id)arg2 completion:(id /* block */)arg3;
- (id)performSynchronouslyTask:(id)arg1 sandBoxExtensions:(id)arg2 error:(id*)arg3;
- (void)performSynchronouslyTrialTask:(id)arg1 completion:(id /* block */)arg2;
- (void)performTask:(id)arg1 sandBoxExtensions:(id)arg2 completion:(id /* block */)arg3;
- (void)performTrialTask:(id)arg1 completion:(id /* block */)arg2;
- (id)plugin;
- (id)processTaskResult:(id)arg1 forTask:(id)arg2 duration:(double)arg3 error:(id*)arg4;
- (void)setPlugin:(id)arg1;
- (void)setStopTransaction:(id)arg1;
- (void)setTaskTransaction:(id)arg1;
- (void)simulateCrash;
- (void)stop;
- (void)stopSynchronously;
- (id)stopTransaction;
- (id)taskTransaction;

@end
