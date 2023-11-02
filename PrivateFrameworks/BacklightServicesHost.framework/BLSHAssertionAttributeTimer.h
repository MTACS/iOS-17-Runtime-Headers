
@interface BLSHAssertionAttributeTimer : NSObject <BLSHLocalAssertionAttributeHandlerEntry, BSCancellable, BSInvalidatable> {
    <BLSAssertionServiceResponding> * _assertion;
    BLSDurationAttribute * _attribute;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSHAssertionAttributeHandlerService> * _service;
    <BSInvalidatable> * _timer;
}

@property (nonatomic, readonly) <BLSAssertionServiceResponding> *assertion;
@property (nonatomic, readonly) BLSDurationAttribute *attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHAssertionAttributeHandlerService> *service;
@property (readonly) Class superclass;

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;

- (void).cxx_destruct;
- (id)assertion;
- (id)attribute;
- (void)cancel;
- (void)dealloc;
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (void)invalidate;
- (bool)reactivateIfPossible;
- (id)service;
- (void)timerFired;

@end
