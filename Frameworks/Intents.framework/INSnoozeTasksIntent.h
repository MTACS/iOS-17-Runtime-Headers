
@interface INSnoozeTasksIntent : INIntent <INSnoozeTasksIntentExport>

@property (nonatomic, readonly, copy) NSNumber *all;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INDateComponentsRange *nextTriggerTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *tasks;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)all;
- (id)domain;
- (id)initWithTasks:(id)arg1 nextTriggerTime:(id)arg2 all:(id)arg3;
- (id)nextTriggerTime;
- (id)parametersByName;
- (void)setAll:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setNextTriggerTime:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTasks:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)tasks;
- (id)verb;

@end
