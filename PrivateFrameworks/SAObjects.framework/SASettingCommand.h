
@interface SASettingCommand : SADomainCommand

+ (id)command;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
