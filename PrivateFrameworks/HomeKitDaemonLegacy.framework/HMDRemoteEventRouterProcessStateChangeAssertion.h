
@interface HMDRemoteEventRouterProcessStateChangeAssertion : NSObject <HMFLogging> {
    NSDictionary * _applicationsAndIntervals;
    NSMutableDictionary * _backgroundProcesses;
    <HMDRemoteEventRouterProcessStateChangeAssertionDataSource> * _dataSource;
    <HMFCancellable> * _eventRouterActiveAssertion;
    NSMutableSet * _foregroundProcesses;
    NSObject<OS_dispatch_queue> * _queue;
    <HMETimerProvider> * _timerProvider;
}

@property (nonatomic, readonly, copy) NSDictionary *applicationsAndIntervals;
@property (nonatomic, readonly) NSMutableDictionary *backgroundProcesses;
@property (nonatomic, readonly) <HMDRemoteEventRouterProcessStateChangeAssertionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HMFCancellable> *eventRouterActiveAssertion;
@property (nonatomic, readonly) NSMutableSet *foregroundProcesses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HMETimerProvider> *timerProvider;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_backgroundTimerDidExpire:(id)arg1;
- (id)_enableBackgroundTimerWithBundleIdentifier:(id)arg1;
- (void)_removeBackgroundTimer:(id)arg1;
- (id)applicationsAndIntervals;
- (id)backgroundProcesses;
- (id)dataSource;
- (id)eventRouterActiveAssertion;
- (id)foregroundProcesses;
- (void)foregroundStateChangedWithBundleIdentifier:(id)arg1 applicationState:(unsigned long long)arg2;
- (id)initWithQueue:(id)arg1 timerProvider:(id)arg2 applicationsAndIntervals:(id)arg3 dataSource:(id)arg4;
- (id)queue;
- (void)setEventRouterActiveAssertion:(id)arg1;
- (id)timerProvider;

@end
