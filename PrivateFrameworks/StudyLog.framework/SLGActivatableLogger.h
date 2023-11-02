
@interface SLGActivatableLogger : NSObject <SLGActivatableLogging> {
    id /* block */  _activationHandler;
    bool  _active;
    id /* block */  _deactivationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <SLGLogging> * _logger;
}

@property (nonatomic, copy) id /* block */ activationHandler;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) id /* block */ deactivationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)activationHandler;
- (id /* block */)deactivationHandler;
- (id)initWithLogger:(id)arg1;
- (void)invalidate;
- (bool)isActive;
- (bool)isEnabled;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2 completion:(id /* block */)arg3;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2 tags:(id /* block */)arg3;
- (void)logBlock:(id /* block */)arg1 domain:(id)arg2 tags:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)setActivationHandler:(id /* block */)arg1;
- (void)setActive:(bool)arg1;
- (void)setDeactivationHandler:(id /* block */)arg1;

@end
