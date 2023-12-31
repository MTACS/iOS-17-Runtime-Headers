
@interface SACFRemoveScriptCommand : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *scriptIdentifiers;

+ (id)removeScriptCommand;
+ (id)removeScriptCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)scriptIdentifiers;
- (void)setScriptIdentifiers:(id)arg1;

@end
