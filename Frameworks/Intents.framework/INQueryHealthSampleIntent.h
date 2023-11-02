
@interface INQueryHealthSampleIntent : INIntent <INQueryHealthSampleIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long expectedResultType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long objectType;
@property (nonatomic, readonly) long long questionType;
@property (nonatomic, readonly, copy) NSArray *recordDates;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *thresholdValues;
@property (nonatomic, readonly, copy) HKUnit *unit;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (long long)expectedResultType;
- (id)initWithObjectType:(long long)arg1 recordDates:(id)arg2 unit:(id)arg3 questionType:(long long)arg4 thresholdValues:(id)arg5 expectedResultType:(long long)arg6;
- (long long)objectType;
- (id)parametersByName;
- (long long)questionType;
- (id)recordDates;
- (void)setDomain:(id)arg1;
- (void)setExpectedResultType:(long long)arg1;
- (void)setObjectType:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setQuestionType:(long long)arg1;
- (void)setRecordDates:(id)arg1;
- (void)setThresholdValues:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)thresholdValues;
- (id)unit;
- (id)verb;

@end
