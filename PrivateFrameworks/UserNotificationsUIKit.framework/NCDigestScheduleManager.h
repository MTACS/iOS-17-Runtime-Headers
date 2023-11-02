
@interface NCDigestScheduleManager : NSObject {
    NSMutableSet * _digestInfos;
    PCPersistentTimer * _digestScheduleTimer;
    NSObject<OS_dispatch_queue> * _digestScheduleTimerQueue;
    NSArray * _digestScheduleTimes;
    NSHashTable * _observers;
    NCDigestInfo * _previouslyScheduledDigestInfo;
    NCDigestInfo * _upcomingScheduledDigestInfo;
}

@property (nonatomic, retain) NSMutableSet *digestInfos;
@property (nonatomic, retain) PCPersistentTimer *digestScheduleTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *digestScheduleTimerQueue;
@property (nonatomic, retain) NSArray *digestScheduleTimes;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NCDigestInfo *previouslyScheduledDigestInfo;
@property (nonatomic, retain) NCDigestInfo *upcomingScheduledDigestInfo;

- (void).cxx_destruct;
- (id)_currentScheduleTimes;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (void)_publishDigestInfo:(id)arg1 withUpcomingDigestInfo:(id)arg2;
- (void)_publishRevokeUpcomingDigest:(id)arg1;
- (void)_publishToAllObservers:(id /* block */)arg1;
- (void)_publishUpcomingDigestInfo:(id)arg1;
- (id)_scheduleDateFromScheduleTime:(id)arg1;
- (void)_scheduleTimerFiredForTimer:(id)arg1;
- (void)_scheduleTimerForDigestInfo:(id)arg1;
- (void)_updateDigestInfosForScheduleTimes:(id)arg1;
- (void)_updateUpcomingScheduledDigestInfo;
- (void)addObserver:(id)arg1;
- (id)digestInfos;
- (id)digestScheduleTimer;
- (id)digestScheduleTimerQueue;
- (id)digestScheduleTimes;
- (id)init;
- (void)invalidateScheduledTimer;
- (void)invalidateScheduledTimerSendCancel:(bool)arg1;
- (id)observers;
- (id)previouslyScheduledDigestInfo;
- (void)removeObserver:(id)arg1;
- (void)setDigestInfos:(id)arg1;
- (void)setDigestScheduleTimer:(id)arg1;
- (void)setDigestScheduleTimerQueue:(id)arg1;
- (void)setDigestScheduleTimes:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPreviouslyScheduledDigestInfo:(id)arg1;
- (void)setUpcomingScheduledDigestInfo:(id)arg1;
- (id)upcomingScheduledDigestInfo;

@end
