
@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *applicationContextObjects;
@property (nonatomic, copy) NSArray *conversationStateAttachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *dictationPromptAbortValues;
@property (nonatomic, copy) NSString *dictationPromptTargetDomain;
@property (nonatomic, copy) NSArray *dictationPromptTargetNodes;
@property (nonatomic, copy) NSArray *disambiguationPromptAbortValues;
@property (nonatomic, copy) NSNumber *disambiguationPromptAmbiguityId;
@property (nonatomic, copy) NSArray *disambiguationPromptResponseTargets;
@property (nonatomic, copy) NSString *disambiguationPromptTargetDomain;
@property (nonatomic, copy) NSArray *displayHintsAsJson;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *nlInput;
@property (nonatomic, copy) NSNumber *objectDisambiguation;
@property (nonatomic) bool shouldResetFlowTaskState;
@property (nonatomic, retain) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASVSystemDialogActOutput *systemDialogActOutput;
@property (nonatomic, copy) NSArray *weightedPromptAbortValues;
@property (nonatomic, copy) NSArray *weightedPromptResponseOptions;
@property (nonatomic, copy) NSArray *weightedPromptResponseTargets;
@property (nonatomic, copy) NSNumber *weightedPromptStrict;
@property (nonatomic, copy) NSString *weightedPromptTargetDomain;

+ (id)clientFlowRequestCallback;
+ (id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2;

- (id)applicationContextObjects;
- (id)conversationStateAttachments;
- (id)dictationPromptAbortValues;
- (id)dictationPromptTargetDomain;
- (id)dictationPromptTargetNodes;
- (id)disambiguationPromptAbortValues;
- (id)disambiguationPromptAmbiguityId;
- (id)disambiguationPromptResponseTargets;
- (id)disambiguationPromptTargetDomain;
- (id)displayHintsAsJson;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nlInput;
- (id)objectDisambiguation;
- (void)setApplicationContextObjects:(id)arg1;
- (void)setConversationStateAttachments:(id)arg1;
- (void)setDictationPromptAbortValues:(id)arg1;
- (void)setDictationPromptTargetDomain:(id)arg1;
- (void)setDictationPromptTargetNodes:(id)arg1;
- (void)setDisambiguationPromptAbortValues:(id)arg1;
- (void)setDisambiguationPromptAmbiguityId:(id)arg1;
- (void)setDisambiguationPromptResponseTargets:(id)arg1;
- (void)setDisambiguationPromptTargetDomain:(id)arg1;
- (void)setDisplayHintsAsJson:(id)arg1;
- (void)setNlInput:(id)arg1;
- (void)setObjectDisambiguation:(id)arg1;
- (void)setShouldResetFlowTaskState:(bool)arg1;
- (void)setSiriKitMetrics:(id)arg1;
- (void)setSystemDialogActOutput:(id)arg1;
- (void)setWeightedPromptAbortValues:(id)arg1;
- (void)setWeightedPromptResponseOptions:(id)arg1;
- (void)setWeightedPromptResponseTargets:(id)arg1;
- (void)setWeightedPromptStrict:(id)arg1;
- (void)setWeightedPromptTargetDomain:(id)arg1;
- (bool)shouldResetFlowTaskState;
- (id)siriKitMetrics;
- (id)systemDialogActOutput;
- (id)weightedPromptAbortValues;
- (id)weightedPromptResponseOptions;
- (id)weightedPromptResponseTargets;
- (id)weightedPromptStrict;
- (id)weightedPromptTargetDomain;

@end
