
@interface INSaveParkingLocationIntent : INIntent <INSaveParkingLocationIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CLPlacemark *parkingLocation;
@property (nonatomic, readonly, copy) NSString *parkingNote;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithParkingLocation:(id)arg1 parkingNote:(id)arg2;
- (id)parametersByName;
- (id)parkingLocation;
- (id)parkingNote;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setParkingLocation:(id)arg1;
- (void)setParkingNote:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
