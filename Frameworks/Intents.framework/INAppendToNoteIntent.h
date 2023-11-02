
@interface INAppendToNoteIntent : INIntent <INAppendToNoteIntentExport>

@property (nonatomic, readonly, copy) INNoteContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INNote *targetNote;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)content;
- (id)domain;
- (id)initWithTargetNote:(id)arg1 content:(id)arg2;
- (id)parametersByName;
- (void)setContent:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTargetNote:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)targetNote;
- (id)verb;

@end
