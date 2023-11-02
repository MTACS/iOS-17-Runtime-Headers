
@interface MLMediaLibraryResourcesServiceServer : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceXPCProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_semaphore> * _accountChangeSemaphore;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSXPCListener * _xpcServiceListener;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *accountChangeSemaphore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *observers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) NSXPCListener *xpcServiceListener;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_blockExecutionForOnGoingAccountChangeIfNeeded;
- (void)_removeObserver:(id)arg1;
- (void)_unblockExecutionForFutureAccountChange;
- (id)accessQueue;
- (id)accountChangeSemaphore;
- (id)calloutQueue;
- (void)emergencyDisconnectWithCompletion:(id /* block */)arg1;
- (id)initWithAccountChangeObserver:(id)arg1;
- (void)libraryContainerPathWithCompletion:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)musicContainerPathWithCompletion:(id /* block */)arg1;
- (id)observers;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setAccountChangeSemaphore:(id)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcServiceListener:(id)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)workQueue;
- (id)xpcServiceListener;

@end
