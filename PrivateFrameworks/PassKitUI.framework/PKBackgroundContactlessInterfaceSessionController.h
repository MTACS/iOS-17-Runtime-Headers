
@interface PKBackgroundContactlessInterfaceSessionController : NSObject <PKContactlessInterfaceSessionDelegate> {
    NSObject<OS_dispatch_group> * _group;
    unsigned long long  _lifecycleState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PKSecureElementPass * _pass;
    id /* block */  _relinquishOwnershipBlock;
    PKContactlessInterfaceSession * _session;
    PKPaymentSessionHandle * _sessionHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKSecureElementPass *pass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_processContext:(id)arg1;
- (void)claimActiveSessionWithCompletion:(id /* block */)arg1;
- (void)contactlessInterfaceSession:(id)arg1 didEndPersistentCardEmulationWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
- (void)contactlessInterfaceSessionDidTerminate:(id)arg1;
- (void)contactlessInterfaceSessionDidTerminate:(id)arg1 withErrorCode:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFieldProperties:(id)arg1 forPassUniqueID:(id)arg2 relinquishOwnership:(id /* block */)arg3;
- (void)invalidate;
- (id)pass;
- (void)setSession:(id)arg1;
- (void)start;

@end
