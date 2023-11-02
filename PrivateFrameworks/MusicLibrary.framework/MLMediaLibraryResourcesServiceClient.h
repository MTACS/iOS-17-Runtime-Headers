
@interface MLMediaLibraryResourcesServiceClient : NSObject <MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol> {
    <MLMediaLibraryAccountChangeObserver> * _accountChangeObserver;
    NSOperationQueue * _accountChangeOperationQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSXPCConnection * _xpcClientConnection;
}

@property (nonatomic, retain) <MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (nonatomic, retain) NSOperationQueue *accountChangeOperationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcClientConnection;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)_initWithAccountChangeObserver:(id)arg1;
- (id)_libraryContainerPathWithError:(id*)arg1;
- (id)_musicContainerPathWithError:(id*)arg1;
- (void)_performOnServerObjectWithMaxRetries:(long long)arg1 error:(id*)arg2 remoteObjectBlock:(id /* block */)arg3;
- (id)accountChangeObserver;
- (id)accountChangeOperationQueue;
- (id)calloutQueue;
- (id)connectionWithListenerEndpoint:(id)arg1;
- (void)emergencyDisconnectWithCompletion:(id /* block */)arg1;
- (id)libraryContainerPathWithError:(id*)arg1;
- (id)musicContainerPathWithError:(id*)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* block */)arg2;
- (id)serialQueue;
- (void)setAccountChangeObserver:(id)arg1;
- (void)setAccountChangeOperationQueue:(id)arg1;
- (void)setXpcClientConnection:(id)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)xpcClientConnection;

@end
