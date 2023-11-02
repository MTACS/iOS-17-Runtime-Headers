
@interface SAMacOpenAboutThisMac : SADomainCommand

+ (id)openAboutThisMac;
+ (id)openAboutThisMacWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
