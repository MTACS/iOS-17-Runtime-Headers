
@interface HRETemplateRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess {
    NSArray * _activeTemplates;
    NSArray * _homeTriggerBuilders;
    NSArray * _rooms;
}

@property (nonatomic, retain) NSArray *activeTemplates;
@property (nonatomic, retain) NSArray *homeTriggerBuilders;
@property (nonatomic, retain) NSArray *rooms;

- (void).cxx_destruct;
- (id)_actionsForDerivingForTemplate:(id)arg1 recommendation:(id)arg2;
- (id)_createInitialRecommendations:(id)arg1 withRecommendation:(id)arg2;
- (id)_defineActionsWithActionMap:(id)arg1 withActionableObjects:(id)arg2;
- (id)_defineProfileActionsForActionableObjects:(id)arg1 withActionMap:(id)arg2;
- (long long)_diffScoreForTriggerComparison:(id)arg1;
- (id)_existingActionSetForTemplate:(id)arg1 recommendation:(id)arg2;
- (id)_filterRecommendations:(id)arg1 fromTemplate:(id)arg2;
- (id)_filterSplitRecommendations:(id)arg1 characteristicTypePriority:(id)arg2;
- (id)_filterToAllowedObjects:(id)arg1 withSourceObjects:(id)arg2 withTrigger:(id)arg3 template:(id)arg4;
- (id)_initialRecommendationsForTemplate:(id)arg1;
- (id)_splitRecommendationsBySplitStrategy:(id)arg1;
- (id)_triggerWithSameConfigurationAsTrigger:(id)arg1;
- (id)activeTemplates;
- (id)characteristicActionsForObject:(id)arg1 actionMap:(id)arg2;
- (id)definiteActionsForCharacteristicActionMap:(id)arg1 object:(id)arg2;
- (id)generateRecommendations;
- (id)homeTriggerBuilders;
- (id)recommendationsWithTemplate:(id)arg1;
- (id)rooms;
- (void)setActiveTemplates:(id)arg1;
- (void)setHomeTriggerBuilders:(id)arg1;
- (void)setRooms:(id)arg1;
- (bool)shouldGenerateRecommendations;

@end
