
@interface WFMoveShortcutEvent : WFEvent {
    NSString * _key;
    NSString * _source;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
