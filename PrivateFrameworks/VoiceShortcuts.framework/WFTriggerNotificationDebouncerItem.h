
@interface WFTriggerNotificationDebouncerItem : NSObject {
    WFConfiguredTrigger * _configuredTrigger;
    WFDebouncer * _debouncer;
    WFWorkflowReference * _reference;
    NSSet * _triggerEventIDs;
}

@property (nonatomic, readonly) WFConfiguredTrigger *configuredTrigger;
@property (nonatomic, readonly) WFDebouncer *debouncer;
@property (nonatomic, readonly) WFWorkflowReference *reference;
@property (nonatomic, retain) NSSet *triggerEventIDs;

- (void).cxx_destruct;
- (id)configuredTrigger;
- (id)debouncer;
- (id)description;
- (id)initWithConfiguredTrigger:(id)arg1 reference:(id)arg2 triggerEventIDs:(id)arg3 debouncer:(id)arg4;
- (id)reference;
- (void)setTriggerEventIDs:(id)arg1;
- (id)triggerEventIDs;

@end
