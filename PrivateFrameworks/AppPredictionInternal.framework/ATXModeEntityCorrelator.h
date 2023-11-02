
@interface ATXModeEntityCorrelator : NSObject {
    <ATXModeEntityEventProviderProtocol> * _entityEventProvider;
    ATXInformationStore * _informationStore;
    <ATXModeEntityEventProviderProtocol> * _localAppLaunchEventProvider;
    <ATXModeEntityEventProviderProtocol> * _macDesktopAppLaunchEventProvider;
    <ATXModeEntityEventProviderProtocol> * _macPortableAppLaunchEventProvider;
    <ATXModeEntityEventProviderProtocol> * _modeEventProvider;
}

- (void).cxx_destruct;
- (long long)daysSinceDate:(id)arg1 today:(id)arg2;
- (id)entityFeaturesForModeEntityScoring;
- (id)entityFeaturesForWidgetScoring;
- (bool)eventOccurredWhileInModeForAggregationEvent:(id)arg1 modeTransitionEvent:(id)arg2;
- (id)featuresForEntitiesFromCompleteCorrelatorState:(id)arg1;
- (id)initWithModeEventProvider:(id)arg1 appLaunchEventProvider:(id)arg2 macPortableAppEventProvider:(id)arg3 macDesktopAppEventProvider:(id)arg4;
- (id)initWithModeEventProvider:(id)arg1 entityEventProvider:(id)arg2;
- (id)mergedWithLocalPublisher;
- (id)mergedWithRemotePublishers;
- (void)populateGlobalOccurencesForAllWidgetsWithWidgetModeEventProvider:(id)arg1 correlatorState:(id)arg2;
- (void)trackNewModeTransitionEvent:(id)arg1 correlatorState:(id)arg2;
- (void)updateCorrelatorState:(id)arg1 forAggregationEvents:(id)arg2;
- (void)updateDateBasedHistogram:(id)arg1 aggregationEvent:(id)arg2 today:(id)arg3;
- (void)updateInternalStateForGlobalOccurrenceEvent:(id)arg1 correlatorState:(id)arg2;
- (void)updateInternalStateForLocalOccurrenceEvent:(id)arg1 correlatorState:(id)arg2;
- (id)zerosArray;

@end
