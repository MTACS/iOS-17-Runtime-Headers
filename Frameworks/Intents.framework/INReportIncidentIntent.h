
@interface INReportIncidentIntent : INIntent <INReportIncidentIntentExport>

@property (nonatomic, readonly, copy) NSString *additionalDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSupportedTrafficIncidentType *incidentType;
@property (nonatomic, copy) NSString *incidentType;
@property (nonatomic, readonly, copy) NSNumber *isClear;
@property (nonatomic, readonly, copy) NSNumber *startTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CLPlacemark *userLocation;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)additionalDetails;
- (id)domain;
- (id)incidentType;
- (id)initWithIncidentType:(id)arg1 startTime:(id)arg2 additionalDetails:(id)arg3 isClear:(id)arg4;
- (id)initWithIncidentType:(id)arg1 startTime:(id)arg2 isClear:(id)arg3 userLocation:(id)arg4 additionalDetails:(id)arg5;
- (id)isClear;
- (id)parametersByName;
- (void)setAdditionalDetails:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIncidentType:(id)arg1;
- (void)setIsClear:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)startTime;
- (id)userLocation;
- (id)verb;

@end
