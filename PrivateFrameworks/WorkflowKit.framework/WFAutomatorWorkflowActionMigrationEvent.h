
@interface WFAutomatorWorkflowActionMigrationEvent : WFEvent {
    NSString * _automatorActionIdentifier;
    bool  _completed;
    NSString * _key;
}

@property (nonatomic, copy) NSString *automatorActionIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)automatorActionIdentifier;
- (bool)completed;
- (id)key;
- (void)setAutomatorActionIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setKey:(id)arg1;

@end
