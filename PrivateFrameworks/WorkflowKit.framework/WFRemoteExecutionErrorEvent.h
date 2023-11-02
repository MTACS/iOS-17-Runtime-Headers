
@interface WFRemoteExecutionErrorEvent : WFEvent {
    NSString * _destinationType;
    NSString * _errorCode;
    NSString * _errorDomain;
    NSString * _key;
    NSString * _source;
}

@property (nonatomic, copy) NSString *destinationType;
@property (nonatomic, copy) NSString *errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *source;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)destinationType;
- (id)errorCode;
- (id)errorDomain;
- (id)key;
- (void)setDestinationType:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
