
@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable> {
    SBApplication * _application;
    bool  _invalidated;
    <SBApplicationWakeLifecycleHandling> * _lifecycleTracker;
    <BSTimerScheduleQuerying><BSInvalidatable> * _wakeTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *scheduledDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSTimerScheduleQuerying><BSInvalidatable> *wakeTimer;

- (void).cxx_destruct;
- (void)_applicationProcessStateDidChange:(id)arg1;
- (id)_expectedFireDateForTimer:(id)arg1;
- (void)_forceInvalidate;
- (id)_initWithLifecycleTracker:(id)arg1 forApplication:(id)arg2;
- (void)dealloc;
- (void)endResumeIfAwoken;
- (id)init;
- (void)invalidate;
- (void)scheduleWakeForDate:(id)arg1;
- (id)scheduledDate;
- (void)setWakeTimer:(id)arg1;
- (void)unschedule;
- (void)wakeImmediately;
- (id)wakeTimer;

@end
