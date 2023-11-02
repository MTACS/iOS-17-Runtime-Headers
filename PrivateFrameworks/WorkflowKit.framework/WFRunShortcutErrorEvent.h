
@interface WFRunShortcutErrorEvent : WFEvent {
    NSString * _actionIdentifier;
    NSString * _automationType;
    bool  _didRunRemotely;
    NSString * _errorCode;
    NSString * _errorDomain;
    NSString * _key;
    NSString * _runSource;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *automationType;
@property (nonatomic) bool didRunRemotely;
@property (nonatomic, copy) NSString *errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *runSource;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)automationType;
- (bool)didRunRemotely;
- (id)errorCode;
- (id)errorDomain;
- (id)key;
- (id)runSource;
- (void)setActionIdentifier:(id)arg1;
- (void)setAutomationType:(id)arg1;
- (void)setDidRunRemotely:(bool)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setRunSource:(id)arg1;

@end
