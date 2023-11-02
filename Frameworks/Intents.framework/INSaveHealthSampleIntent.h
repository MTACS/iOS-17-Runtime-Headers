
@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long objectType;
@property (nonatomic, readonly, copy) INDateComponentsRange *recordDate;
@property (nonatomic, readonly, copy) NSArray *sampleMetadatas;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HKUnit *unit;
@property (nonatomic, readonly, copy) NSArray *values;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithRecordDate:(id)arg1 objectType:(long long)arg2 values:(id)arg3 unit:(id)arg4 sampleMetadatas:(id)arg5;
- (long long)objectType;
- (id)parametersByName;
- (id)recordDate;
- (id)sampleMetadatas;
- (void)setDomain:(id)arg1;
- (void)setObjectType:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRecordDate:(id)arg1;
- (void)setSampleMetadatas:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setValues:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)unit;
- (id)values;
- (id)verb;

@end
