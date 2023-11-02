
@interface HMDLaunchHandler : HMFObject <HMFLogging> {
    <HMDFileManager> * _fileManager;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    id /* block */  _jetsamPriorityHandler;
    NSMutableSet * _registeredRelaunchClients;
    NSURL * _relaunchPlistFileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDFileManager> *fileManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ jetsamPriorityHandler;
@property (nonatomic, readonly) NSMutableSet *registeredRelaunchClients;
@property (nonatomic, readonly, copy) NSURL *relaunchPlistFileURL;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)_setJetsamPriorityElevated:(bool)arg1;
- (void)_updateOrRemoveRelaunchPlist;
- (void)deregisterRelaunchClientWithUUID:(id)arg1;
- (id)fileManager;
- (id)handlerQueue;
- (id)init;
- (id)initWithRelaunchPlistFileURL:(id)arg1 fileManager:(id)arg2 jetsamPriorityHandler:(id /* block */)arg3;
- (id /* block */)jetsamPriorityHandler;
- (void)registerRelaunchClientWithUUID:(id)arg1;
- (id)registeredRelaunchClients;
- (id)relaunchPlistFileURL;
- (void)removePersistentRelaunchRegistrationsIfNecessary;

@end
