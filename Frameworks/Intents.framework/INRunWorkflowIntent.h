
@interface INRunWorkflowIntent : INIntent <INRunWorkflowIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *workflow;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithWorkflow:(id)arg1;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)verb;
- (id)workflow;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)initWithWorkflowReference:(id)arg1;
- (id)initWithWorkflowReference:(id)arg1 includeIcon:(bool)arg2;
- (id)initWithWorkflowReference:(id)arg1 includeIcon:(bool)arg2 iconDrawerContext:(id)arg3;
- (void)setIconForAssociatedApplicationInWorkflow:(id)arg1;
- (id)workflowForIntentInDatabase:(id)arg1;

@end
