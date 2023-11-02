
@interface _DKStarkMonitor : _DKMonitor <CARSessionObserving> {
    CARSessionStatus * _sessionStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARSessionStatus *sessionStatus;
@property (readonly) Class superclass;

+ (id)_eventWithState:(bool)arg1;
+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (id)sessionStatus;
- (void)setSessionStatus:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateCurrentState;

@end
