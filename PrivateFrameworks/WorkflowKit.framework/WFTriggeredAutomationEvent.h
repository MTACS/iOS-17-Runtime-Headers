
@interface WFTriggeredAutomationEvent : WFEvent {
    unsigned int  _batchCount;
    unsigned int  _batchDroppedCount;
    NSString * _key;
    bool  _requiredRuntimeConfirmation;
    NSString * _triggerType;
}

@property (nonatomic) unsigned int batchCount;
@property (nonatomic) unsigned int batchDroppedCount;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) bool requiredRuntimeConfirmation;
@property (nonatomic, copy) NSString *triggerType;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;
- (unsigned int)batchCount;
- (unsigned int)batchDroppedCount;
- (id)key;
- (bool)requiredRuntimeConfirmation;
- (void)setBatchCount:(unsigned int)arg1;
- (void)setBatchDroppedCount:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setRequiredRuntimeConfirmation:(bool)arg1;
- (void)setTriggerType:(id)arg1;
- (id)triggerType;

@end
