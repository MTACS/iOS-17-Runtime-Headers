
@interface SBIdleTimerInfo : NSObject {
    <SBFIdleTimerBehaviorProviding> * _behavior;
    SBIdleTimerProxy * _idleTimerProxy;
    <SBIdleTimerProviding> * _provider;
    NSString * _reason;
}

@property (nonatomic, retain) <SBFIdleTimerBehaviorProviding> *behavior;
@property (nonatomic, retain) SBIdleTimerProxy *idleTimerProxy;
@property (nonatomic, readonly) <SBIdleTimerProviding> *provider;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (id)behavior;
- (id)idleTimerProxy;
- (id)initWithProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 idleTimerProxy:(id)arg4;
- (id)provider;
- (id)reason;
- (void)setBehavior:(id)arg1;
- (void)setIdleTimerProxy:(id)arg1;
- (void)setReason:(id)arg1;

@end
