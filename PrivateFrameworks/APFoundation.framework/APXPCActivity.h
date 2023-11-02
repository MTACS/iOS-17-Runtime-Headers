
@interface APXPCActivity : NSObject {
    NSObject<OS_xpc_object> * _activity;
    bool  _deferralCheckActive;
    <APXPCActivityDelegate> * _delegate;
    bool  _staticActivity;
    NSString * _taskID;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic) bool deferralCheckActive;
@property (nonatomic, retain) <APXPCActivityDelegate> *delegate;
@property (nonatomic) bool staticActivity;
@property (nonatomic, retain) NSString *taskID;

+ (id)_translateCriteria:(id)arg1;
+ (id)activityQueue;

- (void).cxx_destruct;
- (void)_backgroundDeferralCheck;
- (bool)_continueActivity;
- (void)_endDeferralCheck;
- (void)_registerActivityWithCriteria:(id)arg1;
- (void)_startDeferralCheck;
- (id)activity;
- (void)cancel;
- (void)checkin;
- (bool)deferActivity;
- (bool)deferralCheckActive;
- (id)delegate;
- (bool)finished;
- (id)initWithDelegate:(id)arg1;
- (void)schedule;
- (void)scheduleWithDelay:(long long)arg1;
- (void)setActivity:(id)arg1;
- (bool)setActivityState:(long long)arg1;
- (void)setDeferralCheckActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStaticActivity:(bool)arg1;
- (void)setTaskID:(id)arg1;
- (bool)shouldDefer;
- (bool)staticActivity;
- (id)taskID;

@end
