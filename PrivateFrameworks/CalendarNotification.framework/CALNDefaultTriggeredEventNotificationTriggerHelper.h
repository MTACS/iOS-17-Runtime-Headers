
@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper> {
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
- (bool)_eventWillEndBeforeUserArrivesForHypothesis:(id)arg1 eventEndDate:(id)arg2;
- (bool)_exceededMaximumTravelTimeThresholdForHypothesis:(id)arg1;
- (bool)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (bool)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)arg1 oldNotificationData:(id)arg2;
- (bool)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (bool)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4 hasExistingTravelAdvice:(bool)arg5 satisfiesMinimumTravelTimeThreshold:(bool)arg6;
- (id)dateProvider;
- (id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2;
- (bool)shouldTriggerForSourceClientIdentifier:(id)arg1 trigger:(unsigned long long)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4;
- (id)travelAdvisoryAuthority;

@end
