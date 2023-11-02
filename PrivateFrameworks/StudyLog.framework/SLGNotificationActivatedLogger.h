
@interface SLGNotificationActivatedLogger : NSObject <SLGActivatableLogging> {
    NSMutableSet * _activeReasons;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <SLGActivatableLogging> * _logger;
    NSMutableDictionary * _registrationsByReason;
}

@property (nonatomic, copy) id /* block */ activationHandler;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) id /* block */ deactivationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginLoggingForReason:(id)arg1;
- (void)_cancelRegistrations;
- (void)_endLoggingForReason:(id)arg1;
- (id /* block */)activationHandler;
- (void)addBeginNotification:(id)arg1 endNotification:(id)arg2;
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
