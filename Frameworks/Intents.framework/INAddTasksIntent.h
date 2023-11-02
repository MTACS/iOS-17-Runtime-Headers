
@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>

@property (nonatomic, copy) INContactEventTrigger *contactEventTrigger;
@property (nonatomic, copy) NSArray *contactEventTriggers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INIntent *intent;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INTaskList *targetTaskList;
@property (nonatomic, copy) NSArray *targetTaskListMembers;
@property (nonatomic) long long taskReference;
@property (nonatomic, readonly, copy) NSArray *taskTitles;
@property (nonatomic, readonly, copy) INTemporalEventTrigger *temporalEventTrigger;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (long long)_intentCategory;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)contactEventTrigger;
- (id)contactEventTriggers;
- (id)domain;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 priority:(long long)arg5;
- (id)intent;
- (id)parametersByName;
- (long long)priority;
- (void)setContactEventTrigger:(id)arg1;
- (void)setContactEventTriggers:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setTargetTaskList:(id)arg1;
- (void)setTargetTaskListMembers:(id)arg1;
- (void)setTaskReference:(long long)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)spatialEventTrigger;
- (id)targetTaskList;
- (id)targetTaskListMembers;
- (long long)taskReference;
- (id)taskTitles;
- (id)temporalEventTrigger;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

@end
