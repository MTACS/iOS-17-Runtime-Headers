
@interface CALNDefaultTriggeredEventNotificationTransitionProvider : NSObject <CALNTriggeredEventNotificationTransitionProvider> {
    <CalDateProvider> * _dateProvider;
    <CALNTravelAdvisoryAuthority> * _travelAdvisoryAuthority;
}

@property (nonatomic, readonly) <CalDateProvider> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CALNTravelAdvisoryAuthority> *travelAdvisoryAuthority;

- (void).cxx_destruct;
- (bool)_shouldAddNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (bool)_shouldModifyForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (bool)_shouldRemoveNotificationForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (bool)_timeToLeaveStateAlreadyDisplayedBasedOnSourceNotificationInfo:(id)arg1 oldNotificationData:(id)arg2;
- (unsigned long long)_transitionForAlarmFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (unsigned long long)_transitionForTimeToLeaveRefreshTimerFiredForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (unsigned long long)_transitionForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (id)dateProvider;
- (id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2;
- (unsigned long long)transitionForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3 trigger:(unsigned long long)arg4;
- (id)travelAdvisoryAuthority;

@end
