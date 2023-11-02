
@interface ATXFocusModeSignalsMetric : _ATXCoreAnalyticsMetric {
    NSString * _abGroup;
    NSString * _activeConfigurationType;
    NSString * _appBundleId;
    NSNumber * _categoryScore;
    NSNumber * _classConditionalOfNotificationsClearedForEntity;
    NSNumber * _classConditionalOfNotificationsReceivedForEntity;
    NSNumber * _classConditionalProbabilityOfModeGivenEntity;
    NSNumber * _deploymentId;
    NSNumber * _entityModeEntityScore;
    bool  _entityOccurredGloballyOverLastNDays;
    bool  _entityOccurredInModeOverLastNDays;
    NSString * _experimentId;
    unsigned long long  _focusMode;
    NSNumber * _globalAppInterruptionsCountByEntity;
    NSNumber * _globalClearanceRateForEntity;
    NSNumber * _globalInterruptingPrior;
    NSNumber * _globalModeAffinityPrior;
    NSNumber * _globalOccurrencesOfEntity;
    NSNumber * _globalPopularityForEntity;
    NSNumber * _globalPopularityOfInterruptingEntity;
    NSNumber * _globalPopularityOfNotificationsReceivedForEntity;
    NSString * _intentHash;
    bool  _isAppCandidateSuggestion;
    bool  _isAppRecommendedSuggestion;
    NSNumber * _localClearanceRateForEntity;
    NSNumber * _localOccurrencesOfEntityInMode;
    NSNumber * _localPopularityOfNotificationsReceivedForEntity;
    NSNumber * _modeAppInterruptionsClassConditionalProbabilityByEntity;
    NSNumber * _modeAppInterruptionsCountByEntity;
    NSNumber * _modePopularityForEntity;
    NSNumber * _modePopularityOfInterruptingEntity;
    NSNumber * _notificationsClearedGlobally;
    NSNumber * _notificationsClearedInMode;
    NSNumber * _notificationsMuted;
    NSNumber * _notificationsReceivedGlobally;
    NSNumber * _notificationsReceivedInMode;
    NSNumber * _posteriorProbabilityOfEntityGivenMode;
    NSNumber * _ratioOfLocalToGlobalNotificationsClearedRateForEntity;
    NSNumber * _ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
    NSNumber * _ratioOfModePopularityToGlobalPopularityOfEntity;
    NSNumber * _ratioOfModePopularityToGlobalPopularityOfInterruptingEntity;
    NSString * _treatmentId;
    NSNumber * _uniqueOccurrencesOfEntityInMode;
    bool  _wasAppSuggestedDuringModeSetup;
    bool  _wasAppSuggestionDuringModeSetupAccepted;
    NSString * _widgetBundleIdAndKind;
    NSString * _widgetSize;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *activeConfigurationType;
@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) NSNumber *categoryScore;
@property (nonatomic, retain) NSNumber *classConditionalOfNotificationsClearedForEntity;
@property (nonatomic, retain) NSNumber *classConditionalOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSNumber *classConditionalProbabilityOfModeGivenEntity;
@property (nonatomic, retain) NSNumber *deploymentId;
@property (nonatomic, retain) NSNumber *entityModeEntityScore;
@property (nonatomic) bool entityOccurredGloballyOverLastNDays;
@property (nonatomic) bool entityOccurredInModeOverLastNDays;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic) unsigned long long focusMode;
@property (nonatomic, retain) NSNumber *globalAppInterruptionsCountByEntity;
@property (nonatomic, retain) NSNumber *globalClearanceRateForEntity;
@property (nonatomic, retain) NSNumber *globalInterruptingPrior;
@property (nonatomic, retain) NSNumber *globalModeAffinityPrior;
@property (nonatomic, retain) NSNumber *globalOccurrencesOfEntity;
@property (nonatomic, retain) NSNumber *globalPopularityForEntity;
@property (nonatomic, retain) NSNumber *globalPopularityOfInterruptingEntity;
@property (nonatomic, retain) NSNumber *globalPopularityOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSString *intentHash;
@property (nonatomic) bool isAppCandidateSuggestion;
@property (nonatomic) bool isAppRecommendedSuggestion;
@property (nonatomic, retain) NSNumber *localClearanceRateForEntity;
@property (nonatomic, retain) NSNumber *localOccurrencesOfEntityInMode;
@property (nonatomic, retain) NSNumber *localPopularityOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSNumber *modeAppInterruptionsClassConditionalProbabilityByEntity;
@property (nonatomic, retain) NSNumber *modeAppInterruptionsCountByEntity;
@property (nonatomic, retain) NSNumber *modePopularityForEntity;
@property (nonatomic, retain) NSNumber *modePopularityOfInterruptingEntity;
@property (nonatomic, retain) NSNumber *notificationsClearedGlobally;
@property (nonatomic, retain) NSNumber *notificationsClearedInMode;
@property (nonatomic, retain) NSNumber *notificationsMuted;
@property (nonatomic, retain) NSNumber *notificationsReceivedGlobally;
@property (nonatomic, retain) NSNumber *notificationsReceivedInMode;
@property (nonatomic, retain) NSNumber *posteriorProbabilityOfEntityGivenMode;
@property (nonatomic, retain) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity;
@property (nonatomic, retain) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
@property (nonatomic, retain) NSNumber *ratioOfModePopularityToGlobalPopularityOfEntity;
@property (nonatomic, retain) NSNumber *ratioOfModePopularityToGlobalPopularityOfInterruptingEntity;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic, retain) NSNumber *uniqueOccurrencesOfEntityInMode;
@property (nonatomic) bool wasAppSuggestedDuringModeSetup;
@property (nonatomic) bool wasAppSuggestionDuringModeSetupAccepted;
@property (nonatomic, retain) NSString *widgetBundleIdAndKind;
@property (nonatomic, retain) NSString *widgetSize;

- (void).cxx_destruct;
- (id)abGroup;
- (id)activeConfigurationType;
- (id)appBundleId;
- (id)categoryScore;
- (id)classConditionalOfNotificationsClearedForEntity;
- (id)classConditionalOfNotificationsReceivedForEntity;
- (id)classConditionalProbabilityOfModeGivenEntity;
- (id)coreAnalyticsDictionary;
- (id)deploymentId;
- (id)entityModeEntityScore;
- (bool)entityOccurredGloballyOverLastNDays;
- (bool)entityOccurredInModeOverLastNDays;
- (id)experimentId;
- (unsigned long long)focusMode;
- (id)globalAppInterruptionsCountByEntity;
- (id)globalClearanceRateForEntity;
- (id)globalInterruptingPrior;
- (id)globalModeAffinityPrior;
- (id)globalOccurrencesOfEntity;
- (id)globalPopularityForEntity;
- (id)globalPopularityOfInterruptingEntity;
- (id)globalPopularityOfNotificationsReceivedForEntity;
- (id)intentHash;
- (bool)isAppCandidateSuggestion;
- (bool)isAppRecommendedSuggestion;
- (id)localClearanceRateForEntity;
- (id)localOccurrencesOfEntityInMode;
- (id)localPopularityOfNotificationsReceivedForEntity;
- (id)metricName;
- (id)modeAppInterruptionsClassConditionalProbabilityByEntity;
- (id)modeAppInterruptionsCountByEntity;
- (id)modePopularityForEntity;
- (id)modePopularityOfInterruptingEntity;
- (id)notificationsClearedGlobally;
- (id)notificationsClearedInMode;
- (id)notificationsMuted;
- (id)notificationsReceivedGlobally;
- (id)notificationsReceivedInMode;
- (id)posteriorProbabilityOfEntityGivenMode;
- (id)ratioOfLocalToGlobalNotificationsClearedRateForEntity;
- (id)ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity;
- (id)ratioOfModePopularityToGlobalPopularityOfEntity;
- (id)ratioOfModePopularityToGlobalPopularityOfInterruptingEntity;
- (void)setAbGroup:(id)arg1;
- (void)setActiveConfigurationType:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setCategoryScore:(id)arg1;
- (void)setClassConditionalOfNotificationsClearedForEntity:(id)arg1;
- (void)setClassConditionalOfNotificationsReceivedForEntity:(id)arg1;
- (void)setClassConditionalProbabilityOfModeGivenEntity:(id)arg1;
- (void)setDeploymentId:(id)arg1;
- (void)setEntityModeEntityScore:(id)arg1;
- (void)setEntityOccurredGloballyOverLastNDays:(bool)arg1;
- (void)setEntityOccurredInModeOverLastNDays:(bool)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setFocusMode:(unsigned long long)arg1;
- (void)setGlobalAppInterruptionsCountByEntity:(id)arg1;
- (void)setGlobalClearanceRateForEntity:(id)arg1;
- (void)setGlobalInterruptingPrior:(id)arg1;
- (void)setGlobalModeAffinityPrior:(id)arg1;
- (void)setGlobalOccurrencesOfEntity:(id)arg1;
- (void)setGlobalPopularityForEntity:(id)arg1;
- (void)setGlobalPopularityOfInterruptingEntity:(id)arg1;
- (void)setGlobalPopularityOfNotificationsReceivedForEntity:(id)arg1;
- (void)setIntentHash:(id)arg1;
- (void)setIsAppCandidateSuggestion:(bool)arg1;
- (void)setIsAppRecommendedSuggestion:(bool)arg1;
- (void)setLocalClearanceRateForEntity:(id)arg1;
- (void)setLocalOccurrencesOfEntityInMode:(id)arg1;
- (void)setLocalPopularityOfNotificationsReceivedForEntity:(id)arg1;
- (void)setModeAppInterruptionsClassConditionalProbabilityByEntity:(id)arg1;
- (void)setModeAppInterruptionsCountByEntity:(id)arg1;
- (void)setModePopularityForEntity:(id)arg1;
- (void)setModePopularityOfInterruptingEntity:(id)arg1;
- (void)setNotificationsClearedGlobally:(id)arg1;
- (void)setNotificationsClearedInMode:(id)arg1;
- (void)setNotificationsMuted:(id)arg1;
- (void)setNotificationsReceivedGlobally:(id)arg1;
- (void)setNotificationsReceivedInMode:(id)arg1;
- (void)setPosteriorProbabilityOfEntityGivenMode:(id)arg1;
- (void)setRatioOfLocalToGlobalNotificationsClearedRateForEntity:(id)arg1;
- (void)setRatioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity:(id)arg1;
- (void)setRatioOfModePopularityToGlobalPopularityOfEntity:(id)arg1;
- (void)setRatioOfModePopularityToGlobalPopularityOfInterruptingEntity:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setUniqueOccurrencesOfEntityInMode:(id)arg1;
- (void)setWasAppSuggestedDuringModeSetup:(bool)arg1;
- (void)setWasAppSuggestionDuringModeSetupAccepted:(bool)arg1;
- (void)setWidgetBundleIdAndKind:(id)arg1;
- (void)setWidgetSize:(id)arg1;
- (id)treatmentId;
- (id)uniqueOccurrencesOfEntityInMode;
- (bool)wasAppSuggestedDuringModeSetup;
- (bool)wasAppSuggestionDuringModeSetupAccepted;
- (id)widgetBundleIdAndKind;
- (id)widgetSize;

@end