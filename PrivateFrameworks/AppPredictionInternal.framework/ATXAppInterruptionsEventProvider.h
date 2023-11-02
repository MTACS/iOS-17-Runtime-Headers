
@interface ATXAppInterruptionsEventProvider : NSObject {
    ATXInterruptedAppSessionAccumulator * _globalInterruptedAppSessionsAccumulator;
    <ATXModeEntityEventProviderProtocol> * _modeEventProvider;
    ATXInterruptedAppSessionAccumulator * _modeInterruptedAppSessionsAccumulator;
    ATXModeEvent * _mostRecentModeEvent;
}

@property (nonatomic, readonly) ATXModeEvent *mostRecentModeEvent;

- (void).cxx_destruct;
- (bool)appLaunchEventOccurredWhileInMode:(id)arg1 modeTransitionEvent:(id)arg2;
- (id)dateIntervalFromAppLaunchEvent:(id)arg1;
- (id)dateIntervalFromNotificationEvent:(id)arg1;
- (unsigned long long)globalAppInterruptionsCountByEntity:(id)arg1;
- (double)globalPopularityOfInterruptingEntity:(id)arg1;
- (id)initWithModeEventProvider:(id)arg1;
- (double)modeAppInterruptionsClassConditionalProbabilityByEntity:(id)arg1;
- (unsigned long long)modeAppInterruptionsCountByEntity:(id)arg1;
- (double)modePopularityOfInterruptingEntity:(id)arg1;
- (id)mostRecentModeEvent;
- (bool)notificationEventOccurredWhileInMode:(id)arg1 modeTransitionEvent:(id)arg2;
- (double)ratioOfModePopularityToGlobalPopularityOfInterruptingEntity:(id)arg1;
- (bool)successfullyCalculatedAppSessionInterruptions;
- (void)trackAppSessionInterruption:(id)arg1;
- (void)trackNewModeEvent:(id)arg1;

@end
