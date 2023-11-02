
@interface INCreateEventIntent : INIntent <INCreateEventIntentExport>

@property (nonatomic, readonly, copy) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLPlacemark *location;
@property (nonatomic, readonly, copy) NSArray *participants;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)dateTimeRange;
- (id)domain;
- (id)initWithTitle:(id)arg1 dateTimeRange:(id)arg2 participants:(id)arg3 location:(id)arg4;
- (id)location;
- (id)parametersByName;
- (id)participants;
- (void)setDateTimeRange:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)title;
- (id)verb;

@end
