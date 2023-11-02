
@interface INJoinCallIntent : INIntent <INJoinCallIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INCallGroupConversation *groupConversation;
@property (nonatomic, readonly, copy) INCallGroupConversationFilter *groupConversationFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)groupConversation;
- (id)groupConversationFilter;
- (id)initWithGroupConversationFilter:(id)arg1 groupConversation:(id)arg2;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setGroupConversation:(id)arg1;
- (void)setGroupConversationFilter:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
