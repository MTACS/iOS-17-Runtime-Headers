
@interface ATXDailyPhubbingAccumulator : NSObject {
    NSMutableArray * _appInFocusStartingEvents;
    BPSPublisher * _appLaunchPublisher;
    NSMutableArray * _appSessionsWithinPhubbingEvent;
    BPSPublisher * _deviceScreenLockedPublisher;
    BMDeviceScreenLocked * _lastLoggedScreenEvent;
    RTProximityEvent * _mostRecentProximityPeopleEvent;
    NSDate * _phubbingEndTime;
    NSMutableArray * _phubbingSessionEvents;
    NSArray * _phubbingSessions;
    NSDate * _phubbingStartTime;
    BPSPublisher * _proximityPublisher;
}

@property (nonatomic, readonly) RTProximityEvent *mostRecentProximityPeopleEvent;
@property (nonatomic, readonly, copy) NSArray *phubbingSessions;

- (void).cxx_destruct;
- (void)addAppSession:(id)arg1 launchReason:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 duration:(double)arg5;
- (bool)appInFocusEventOccured:(id)arg1 whileNearPeople:(id)arg2;
- (id)dateIntervalFromAppInFocusEvent:(id)arg1;
- (id)dateIntervalFromPeopleEvent:(id)arg1;
- (id)dateIntervalFromScreenLockEvent:(id)arg1;
- (id)init;
- (id)initWithProximityEventPublisher:(id)arg1 screenLockedPublisher:(id)arg2 appLaunchPublisher:(id)arg3;
- (id)mostRecentProximityPeopleEvent;
- (id)phubbingSessions;
- (void)recordAppLaunchEndEvent:(id)arg1;
- (void)recordAppLaunchStartEvent:(id)arg1;
- (bool)screenEventOccured:(id)arg1 whileNearPeople:(id)arg2;
- (bool)successfullyAccumulatedPhubbingEvents;
- (void)trackMostRecentDiscoveredPeopleEvent:(id)arg1;
- (void)trackScreenEndingEvent:(id)arg1;
- (void)trackScreenStartingEvent:(id)arg1;

@end
