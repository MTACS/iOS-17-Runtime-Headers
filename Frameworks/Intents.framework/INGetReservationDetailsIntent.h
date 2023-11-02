
@interface INGetReservationDetailsIntent : INIntent <INGetReservationDetailsIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *reservationContainerReference;
@property (nonatomic, readonly, copy) NSArray *reservationItemReferences;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithReservationContainerReference:(id)arg1 reservationItemReferences:(id)arg2;
- (id)parametersByName;
- (id)reservationContainerReference;
- (id)reservationItemReferences;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setReservationContainerReference:(id)arg1;
- (void)setReservationItemReferences:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
