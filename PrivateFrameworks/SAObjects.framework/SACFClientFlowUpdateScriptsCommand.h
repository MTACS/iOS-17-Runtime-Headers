
@interface SACFClientFlowUpdateScriptsCommand : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *scripts;

+ (id)clientFlowUpdateScriptsCommand;
+ (id)clientFlowUpdateScriptsCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)scripts;
- (void)setScripts:(id)arg1;

@end
