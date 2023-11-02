
@interface BLSHAggregateSystemActivityAssertion : NSObject <BLSHIndividualSystemActivityAssertionAggregator> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_acquisitionHandler;
    NSHashTable * _lock_individualAssertions;
    <SWSystemActivityAcquisitionDetails> * _lock_systemActivityAcquisitionDetails;
    <BLSHSystemActivityAsserting> * _lock_systemActivityAssertion;
    <BLSHOSInterfaceProviding> * _osInterfaceProvider;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_addSystemActivityAcquisitionHandler:(id /* block */)arg1;
- (void)acquireIndividualAssertion:(id)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (void)didAcquireSystemActivityIsActive:(bool)arg1 error:(id)arg2 details:(id)arg3;
- (id)initWithOSInterfaceProvider:(id)arg1;
- (void)invalidateIndividualAssertion:(id)arg1;
- (bool)isActive;

@end
