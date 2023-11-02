
@interface INFindEventsIntent : INIntent <INFindEventsIntentExport>

@property (nonatomic, readonly, copy) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLPlacemark *location;
@property (nonatomic, readonly, copy) NSArray *participants;
@property (nonatomic, readonly) long long requestedEventAttribute;
@property (nonatomic, readonly, copy) NSString *searchQuery;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)dateTimeRange;
- (id)domain;
- (id)initWithSearchQuery:(id)arg1 dateTimeRange:(id)arg2 participants:(id)arg3 location:(id)arg4 requestedEventAttribute:(long long)arg5;
- (id)location;
- (id)parametersByName;
- (id)participants;
- (long long)requestedEventAttribute;
- (id)searchQuery;
- (void)setDateTimeRange:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setRequestedEventAttribute:(long long)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
