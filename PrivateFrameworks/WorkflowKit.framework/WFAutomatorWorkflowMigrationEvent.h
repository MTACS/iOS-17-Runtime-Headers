
@interface WFAutomatorWorkflowMigrationEvent : WFEvent {
    unsigned int  _automatorActionCount;
    bool  _completed;
    NSString * _key;
}

@property (nonatomic) unsigned int automatorActionCount;
@property (nonatomic) bool completed;
@property (nonatomic, copy) NSString *key;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;
- (unsigned int)automatorActionCount;
- (bool)completed;
- (id)key;
- (void)setAutomatorActionCount:(unsigned int)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setKey:(id)arg1;

@end
