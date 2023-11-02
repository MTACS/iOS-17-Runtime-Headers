
@interface SAMacStartScreenSaver : SADomainCommand

+ (id)startScreenSaver;
+ (id)startScreenSaverWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
