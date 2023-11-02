
@interface BKSAssertion : NSObject <RBSAssertionObserving> {
    id /* block */  _acquisitionHandler;
    NSMutableArray * _attributes;
    RBSAssertion * _internalAssertion;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    RBSTarget * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_acquireAsynchronously;
- (id /* block */)_acquisitionHandler;
- (id)_attributes;
- (unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)arg1;
- (id)_initWithName:(id)arg1 handler:(id /* block */)arg2;
- (id)_internalAssertion;
- (void)_invalidateSynchronously:(bool)arg1;
- (void)_lock:(id /* block */)arg1;
- (id /* block */)_lock_acquisitionHandler;
- (id)_lock_attributes;
- (id)_lock_internalAssertion;
- (id)_lock_name;
- (void)_lock_reaquireAssertion;
- (void)_lock_setAttributes:(id)arg1;
- (void)_lock_setInternalAssertion:(id)arg1;
- (void)_lock_setName:(id)arg1;
- (void)_setAttributes:(id)arg1;
- (void)_setTarget:(id)arg1;
- (id)_target;
- (bool)acquire;
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)assertionWillInvalidate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)name;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (bool)valid;

@end
