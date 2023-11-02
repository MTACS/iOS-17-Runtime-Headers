
@interface HFTriggerActionSetsBuilder : NSObject <HFComparable, NSCopying> {
    HFMutableSetDiff * _actionSetBuilders;
    HFTriggerAnonymousActionSetBuilder * _anonymousActionSetBuilder;
    HMHome * _home;
    HMShortcutAction * _shortcutAction;
}

@property (nonatomic, retain) HFMutableSetDiff *actionSetBuilders;
@property (getter=areActionsAffectedByEndEvents, nonatomic, readonly) bool actionsAffectedByEndEvents;
@property (nonatomic, readonly) NSArray *allActionBuilders;
@property (nonatomic, readonly) NSArray *allActionSets;
@property (nonatomic, readonly) NSArray *anonymousActionBuilder;
@property (nonatomic, retain) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) WFHomeWorkflow *homeWorkflow;
@property (nonatomic, readonly) HFMutableSetDiff *hre_recommendedActions;
@property (nonatomic, readonly) bool isShortcutOwned;
@property (nonatomic, readonly) NSArray *namedActionSets;
@property (nonatomic, readonly) HFSetDiff *namedActionSetsDiff;
@property (nonatomic, retain) HMShortcutAction *shortcutAction;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void).cxx_destruct;
- (void)_generateStandaloneServices:(id)arg1 andMediaAccessories:(id)arg2;
- (id)_generateSummaryInformation;
- (id)_generateSummaryInformationForShortcutOwnedTrigger;
- (id)_generateSummaryInformationForStandardTrigger;
- (void)_removeAllNamedActionsSets;
- (id)_removeDuplicateActionSets:(id)arg1;
- (id)_removeEmptyActionSets:(id)arg1;
- (id)_uniqueServiceGroupForServices:(id)arg1;
- (id)actionSetBuilders;
- (id)actionSetsSummary;
- (void)addActionSetBuilder:(id)arg1;
- (void)addActionSetIfNotPresent:(id)arg1;
- (void)addAnonymousActionBuilder:(id)arg1;
- (id)allActionBuilders;
- (id)allActionSets;
- (id)anonymousActionBuilder;
- (id)anonymousActionSetBuilder;
- (bool)areActionsAffectedByEndEvents;
- (id)compareToObject:(id)arg1;
- (void)convertToHomeWorkflowActionSet:(id)arg1;
- (void)convertToHomeWorkflowActionSetIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createActionSetsForShortcuts;
- (void)defaultActionsForShortcut;
- (bool)hasActions;
- (unsigned long long)hash;
- (id)home;
- (id)homeWorkflow;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2;
- (id)initWithActionSets:(id)arg1 inHome:(id)arg2 filterEmptyActionSets:(bool)arg3;
- (bool)isShortcutOwned;
- (id)mediaAccessoriesForPlaybackAction:(id)arg1;
- (id)namedActionSets;
- (id)namedActionSetsDiff;
- (void)removeActionSetBuilder:(id)arg1;
- (void)removeActionSetIfPresent:(id)arg1;
- (void)removeAllActionsAndActionSets;
- (void)removeAnonymousActionBuilder:(id)arg1;
- (void)resetActionSetBuilders;
- (void)resetAllActionSets;
- (void)setActionSetBuilders:(id)arg1;
- (void)setAnonymousActionSetBuilder:(id)arg1;
- (void)setFromTriggerActionSetsBuilder:(id)arg1;
- (void)setHomeWorkflow:(id)arg1;
- (void)setShortcutAction:(id)arg1;
- (id)shortcutAction;
- (void)updateActionSetBuilder:(id)arg1;
- (void)updateActionSetsInTriggerBuilder:(id)arg1;
- (void)updateAnonymousActionBuilder:(id)arg1;
- (void)updateFromTriggerActionSetsBuilder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (id)hre_recommendedActions;

@end
