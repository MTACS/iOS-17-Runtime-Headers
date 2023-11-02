
@interface _DKWakeRequestMonitor : _DKMonitor {
    NSDate * _nextUserVisibleWakeRequestDate;
    NSString * _nextUserVisibleWakeRequestor;
    NSObject<OS_dispatch_source> * _updateTimer;
    bool  _updateTimerResumed;
    int  _wakeRequestToken;
}

@property (nonatomic, retain) NSDate *nextUserVisibleWakeRequestDate;
@property (nonatomic, retain) NSString *nextUserVisibleWakeRequestor;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *updateTimer;
@property (nonatomic) int wakeRequestToken;

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (id)loadState;
- (id)nextUserVisibleWakeRequestDate;
- (id)nextUserVisibleWakeRequestor;
- (void)obtainNextUserVisibleWakeRequest;
- (void)saveState;
- (void)setNextUserVisibleWakeRequestDate:(id)arg1;
- (void)setNextUserVisibleWakeRequestor:(id)arg1;
- (void)setUpdateTimer:(id)arg1;
- (void)setWakeRequestToken:(int)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (id)updateTimer;
- (int)wakeRequestToken;

@end
