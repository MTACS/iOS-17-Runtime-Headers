
@interface SBApplicationTestingManager : NSObject {
    NSString * _currentTestName;
    NSMutableDictionary * _idleTimerDisableAssertions;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_testEndedHandlers;
    NSString * _scrollTestActiveSubtest;
}

@property (nonatomic, copy) NSString *currentTestName;
@property (getter=_idleTimerDisableAssertions, nonatomic, readonly) NSMutableDictionary *idleTimerDisableAssertions;
@property (nonatomic, copy) NSString *scrollTestActiveSubtest;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleTestEnded;
- (id)_idleTimerDisableAssertions;
- (void)_installTestEndedHandler:(id /* block */)arg1;
- (void)_prepareForTestStartup:(id)arg1;
- (id)currentTestName;
- (id)init;
- (void)installNotificationObserverForNotificationName:(id)arg1 forOneNotification:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)installNotificationObserverForNotificationName:(id)arg1 notificationCenter:(id)arg2 forOneNotification:(bool)arg3 usingBlock:(id /* block */)arg4;
- (void)markUserLaunchInitiationTime;
- (id)scrollTestActiveSubtest;
- (void)setCurrentTestName:(id)arg1;
- (void)setScrollTestActiveSubtest:(id)arg1;
- (void)setupKeyboardAnimationSubTestsForTestName:(id)arg1;

@end
