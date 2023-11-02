
@interface INFindDeviceAndPlaySoundIntent : INIntent <INFindDeviceAndPlaySoundIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *isStopRequest;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)devices;
- (id)domain;
- (id)initWithDevices:(id)arg1 isStopRequest:(id)arg2;
- (id)isStopRequest;
- (id)parametersByName;
- (void)setDevices:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIsStopRequest:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
