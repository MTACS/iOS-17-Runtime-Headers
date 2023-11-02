
@interface INCreateNoteIntent : INIntent <INCreateNoteIntentExport>

@property (nonatomic, readonly, copy) INNoteContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *title;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)content;
- (id)domain;
- (id)groupName;
- (id)initWithTitle:(id)arg1 content:(id)arg2 groupName:(id)arg3;
- (id)parametersByName;
- (void)setContent:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)title;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (void)_buildCardFromRequest:(id)arg1 reply:(id /* block */)arg2;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

@end
