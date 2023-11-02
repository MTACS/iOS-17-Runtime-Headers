
@interface WFXPCActivityScheduler : NSObject {
    NSString * _activityIdentifier;
    struct _xpc_activity_eligibility_changed_handler_s { } * _eligibilityChangedHandler;
}

@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic) struct _xpc_activity_eligibility_changed_handler_s { }*eligibilityChangedHandler;

+ (id)activatedSchedulerWithActivityIdentifier:(id)arg1 checkInHandler:(id /* block */)arg2 runHandler:(id /* block */)arg3;
+ (id)activatedSchedulerWithActivityIdentifier:(id)arg1 runHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)activityIdentifier;
- (void)dealloc;
- (struct _xpc_activity_eligibility_changed_handler_s { }*)eligibilityChangedHandler;
- (id)initWithActivityIdentifier:(id)arg1;
- (void)invalidate;
- (void)scheduleWithCheckInHandler:(id /* block */)arg1 runHandler:(id /* block */)arg2;
- (void)scheduleWithRunHandler:(id /* block */)arg1;
- (void)setEligibilityChangedHandler:(struct _xpc_activity_eligibility_changed_handler_s { }*)arg1;

@end
