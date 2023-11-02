
@interface WFAutomatorWorkflowMigrationErrorEvent : WFEvent {
    NSString * _automatorActionIdentifier;
    NSString * _errorDescription;
    NSString * _key;
}

@property (nonatomic, copy) NSString *automatorActionIdentifier;
@property (nonatomic, copy) NSString *errorDescription;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)automatorActionIdentifier;
- (id)errorDescription;
- (id)key;
- (void)setAutomatorActionIdentifier:(id)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setKey:(id)arg1;

@end
