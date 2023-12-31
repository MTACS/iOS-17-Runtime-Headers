
@interface SACFFetchScriptResponse : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *flowScripts;

+ (id)fetchScriptResponse;
+ (id)fetchScriptResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)flowScripts;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setFlowScripts:(id)arg1;

@end
