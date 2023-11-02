
@interface INUpdateAlarmIntent : INIntent <INUpdateAlarmIntentExport>

@property (nonatomic, readonly, copy) INAlarm *alarm;
@property (nonatomic, readonly, copy) INAlarmSearch *alarmSearch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly, copy) INSpeakableString *proposedLabel;
@property (nonatomic, readonly, copy) INDateComponentsRange *proposedTime;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)alarm;
- (id)alarmSearch;
- (id)domain;
- (id)initWithAlarmSearch:(id)arg1 alarm:(id)arg2 operation:(long long)arg3 proposedTime:(id)arg4 proposedLabel:(id)arg5;
- (long long)operation;
- (id)parametersByName;
- (id)proposedLabel;
- (id)proposedTime;
- (void)setAlarm:(id)arg1;
- (void)setAlarmSearch:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setProposedLabel:(id)arg1;
- (void)setProposedTime:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
