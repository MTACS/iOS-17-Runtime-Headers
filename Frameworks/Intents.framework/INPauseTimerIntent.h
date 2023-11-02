
@interface INPauseTimerIntent : INIntent <INPauseTimerIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *pauseMultiple;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTimer *targetTimer;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithTargetTimer:(id)arg1 pauseMultiple:(id)arg2;
- (id)parametersByName;
- (id)pauseMultiple;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPauseMultiple:(id)arg1;
- (void)setTargetTimer:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)targetTimer;
- (id)verb;

@end
