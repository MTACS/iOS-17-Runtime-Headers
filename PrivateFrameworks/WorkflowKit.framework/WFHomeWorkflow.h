
@interface WFHomeWorkflow : NSObject {
    HFTriggerActionsSetsUISummary * _actionSetsSummary;
    WFWorkflow * _cachedWorkflow;
    WFWorkflowRecord * _cachedWorkflowRecord;
    NSData * _data;
    NSUUID * _homeIdentifier;
    NSArray * _shortcutsDictionaryRepresentations;
}

@property (nonatomic, retain) HFTriggerActionsSetsUISummary *actionSetsSummary;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) NSUUID *homeIdentifier;
@property (nonatomic, readonly) bool requiresDeviceUnlock;
@property (nonatomic, readonly) bool requiresDeviceUnlockEnsuringHomesAreLoaded;
@property (nonatomic, readonly) NSArray *shortcutsDictionaryRepresentations;
@property (nonatomic, readonly, copy) NSArray *summaryIconDescriptors;
@property (nonatomic, readonly, copy) NSArray *summaryIconNames;
@property (nonatomic, readonly, copy) NSString *summaryString;

+ (void)setCachedHomes:(id)arg1;

- (void).cxx_destruct;
- (id)actionSetsFromTriggerActionSetsBuilders:(id)arg1;
- (id)actionSetsSummary;
- (id)data;
- (id)debugDescription;
- (id)homeIdentifier;
- (id)initWithData:(id)arg1;
- (bool)requiresDeviceUnlock;
- (bool)requiresDeviceUnlockEnsuringHomesAreLoaded;
- (void)setActionSetsSummary:(id)arg1;
- (id)shortcutsDictionaryRepresentations;
- (id)summaryIconDescriptors;
- (id)summaryIconNames;
- (id)summaryString;
- (id)triggerActionSetsBuilders;
- (id)workflowRecordWithEnvironment:(long long)arg1 error:(id*)arg2;
- (id)workflowWithEnvironment:(long long)arg1 error:(id*)arg2;

@end
