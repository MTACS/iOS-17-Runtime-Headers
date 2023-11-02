
@interface INControlHomeIntent : INIntent <INControlHomeIntentExport, REDonatedActionIdentifierProviding>

@property (nonatomic, readonly, copy) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INDateComponentsRange *time;
@property (nonatomic, readonly, copy) INHomeUserTask *userTask;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (bool)_hasTitle;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2;
- (id)_typedBackingStore;
- (id)contents;
- (id)domain;
- (id)filters;
- (id)initWithContents:(id)arg1;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3;
- (id)parametersByName;
- (void)setContents:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setUserTask:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)time;
- (id)userTask;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

@end
