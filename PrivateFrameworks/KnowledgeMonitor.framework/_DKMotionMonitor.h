
@interface _DKMotionMonitor : _DKMonitor {
    bool  _activateTimer;
    CMMotionActivityManager * _activityManager;
    unsigned long long  _currentDominantMotionState;
    double  _dominantActivityInterval;
    long long  _lastReportedMotionState;
    bool  _monitoringActivity;
    NSObject<OS_dispatch_source> * _motionStateProcessingTimer;
    NSOperationQueue * _operationQueue;
    bool  _shouldRecordMotion;
    BMSource * _source;
}

@property (nonatomic, readonly) bool activateTimer;
@property (nonatomic, retain) CMMotionActivityManager *activityManager;
@property (nonatomic, readonly) unsigned long long currentDominantMotionState;
@property (nonatomic, readonly) double dominantActivityInterval;
@property (nonatomic) long long lastReportedMotionState;
@property (nonatomic) bool monitoringActivity;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *motionStateProcessingTimer;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) bool shouldRecordMotion;
@property (nonatomic, retain) BMSource *source;

+ (unsigned long long)_activityTypeToMotionState:(id)arg1;
+ (id)_eventWithState:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)entitlements;
+ (id)eventStream;
+ (id)log;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (bool)activateTimer;
- (id)activityManager;
- (void)addMotionActivity:(id)arg1;
- (void)addState:(id)arg1;
- (id)classesForSecureStateDecoding;
- (void)computeDominantMotionState;
- (unsigned long long)currentDominantMotionState;
- (void)deactivate;
- (void)dealloc;
- (double)dominantActivityInterval;
- (id)init;
- (id)initForUnitTest:(bool)arg1;
- (long long)lastReportedMotionState;
- (bool)monitoringActivity;
- (id)motionStateProcessingTimer;
- (id)operationQueue;
- (void)setActivityManager:(id)arg1;
- (void)setLastReportedMotionState:(long long)arg1;
- (void)setMonitoringActivity:(bool)arg1;
- (void)setMotionStateProcessingTimer:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setShouldRecordMotion:(bool)arg1;
- (void)setSource:(id)arg1;
- (bool)shouldRecordMotion;
- (id)source;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)update;

@end
