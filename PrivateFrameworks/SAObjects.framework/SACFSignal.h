
@interface SACFSignal : SADomainCommand

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *flowScriptHint;
@property (nonatomic, copy) NSArray *scriptIdentifiers;
@property (nonatomic, retain) SACFAbstractClientCommand *signalPayload;

+ (id)signal;
+ (id)signalWithDictionary:(id)arg1 context:(id)arg2;

- (id)domain;
- (id)encodedClassName;
- (id)flowScriptHint;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (id)scriptIdentifiers;
- (void)setDomain:(id)arg1;
- (void)setFlowScriptHint:(id)arg1;
- (void)setScriptIdentifiers:(id)arg1;
- (void)setSignalPayload:(id)arg1;
- (id)signalPayload;

@end
