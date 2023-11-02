
@interface INSearchAlarmIntent : INIntent <INSearchAlarmIntentExport>

@property (nonatomic, readonly, copy) INAlarmSearch *alarmSearch;
@property (nonatomic, readonly) long long alarmSearchType;
@property (nonatomic, readonly, copy) NSArray *alarms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)alarmSearch;
- (long long)alarmSearchType;
- (id)alarms;
- (id)domain;
- (id)initWithAlarmSearch:(id)arg1 alarmSearchType:(long long)arg2 alarms:(id)arg3;
- (id)parametersByName;
- (void)setAlarmSearch:(id)arg1;
- (void)setAlarmSearchType:(long long)arg1;
- (void)setAlarms:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
