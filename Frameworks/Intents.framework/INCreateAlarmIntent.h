
@interface INCreateAlarmIntent : INIntent <INCreateAlarmIntentExport>

@property (nonatomic, readonly) unsigned long long alarmRepeatScheduleOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *label;
@property (nonatomic, readonly, copy) NSNumber *relativeOffsetInMinutes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INDateComponentsRange *time;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (unsigned long long)alarmRepeatScheduleOptions;
- (id)domain;
- (id)initWithRelativeOffsetInMinutes:(id)arg1 time:(id)arg2 label:(id)arg3 alarmRepeatScheduleOptions:(unsigned long long)arg4;
- (id)label;
- (id)parametersByName;
- (id)relativeOffsetInMinutes;
- (void)setAlarmRepeatScheduleOptions:(unsigned long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setRelativeOffsetInMinutes:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)time;
- (id)verb;

@end
