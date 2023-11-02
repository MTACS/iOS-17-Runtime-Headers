
@interface WFAppSessionCompletedEvent : WFEvent {
    unsigned int  _duration;
    NSString * _key;
    NSString * _source;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;
- (unsigned int)duration;
- (id)key;
- (void)setDuration:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
