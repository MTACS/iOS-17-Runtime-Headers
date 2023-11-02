
@interface BMXPCActivity : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSString * _activityName;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) NSString *activityName;

- (void).cxx_destruct;
- (bool)_setDefer;
- (long long)_state;
- (id)activity;
- (id)activityName;
- (bool)didDefer;
- (id)initWithActivity:(id)arg1;
- (id)initWithActivity:(id)arg1 activityName:(id)arg2;
- (bool)setContinue;
- (bool)setDone;
- (bool)shouldDefer;

@end
