
@interface WFRemoteExecutionEvent : WFEvent {
    NSString * _actionIdentifier;
    bool  _completed;
    NSString * _connectionType;
    NSString * _destinationType;
    NSString * _key;
    NSString * _source;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic) bool completed;
@property (nonatomic, copy) NSString *connectionType;
@property (nonatomic, copy) NSString *destinationType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (bool)completed;
- (id)connectionType;
- (id)destinationType;
- (id)key;
- (void)setActionIdentifier:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setDestinationType:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
