
@interface INChangeAlarmStatusIntent : INIntent <INChangeAlarmStatusIntentExport>

@property (nonatomic, readonly, copy) INAlarmSearch *alarmSearch;
@property (nonatomic, readonly, copy) NSArray *alarms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long operation;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)alarmSearch;
- (id)alarms;
- (id)domain;
- (id)initWithAlarmSearch:(id)arg1 alarms:(id)arg2 operation:(long long)arg3;
- (long long)operation;
- (id)parametersByName;
- (void)setAlarmSearch:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
