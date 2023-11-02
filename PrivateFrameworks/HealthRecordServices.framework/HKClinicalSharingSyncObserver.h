
@interface HKClinicalSharingSyncObserver : NSObject <HKClinicalSharingSyncObserverClientInterface, _HKXPCExportable> {
    <HKClinicalSharingSyncObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didSyncStart;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKClinicalSharingSyncObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)client_syncDidFinishWithError:(id)arg1;
- (void)client_syncDidStartWithInfo:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)initWithConnection:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegateQueue:(id)arg1;
- (void)invalidate;
- (id)remoteInterface;
- (void)resume;
- (void)resumeWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
