
@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>

@property (nonatomic, copy) INContactEventTrigger *contactEventTrigger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTask *targetTask;
@property (nonatomic, readonly, copy) INSpeakableString *taskTitle;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)contactEventTrigger;
- (id)domain;
- (id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)initWithTargetTask:(id)arg1 taskTitle:(id)arg2 status:(long long)arg3 priority:(long long)arg4 spatialEventTrigger:(id)arg5 temporalEventTrigger:(id)arg6;
- (id)parametersByName;
- (long long)priority;
- (void)setContactEventTrigger:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTargetTask:(id)arg1;
- (void)setTaskTitle:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)spatialEventTrigger;
- (long long)status;
- (id)targetTask;
- (id)taskTitle;
- (id)temporalEventTrigger;
- (id)verb;

@end
