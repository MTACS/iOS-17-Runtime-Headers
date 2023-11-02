
@interface SAWaitForCommands : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *commandAceIds;

+ (id)waitForCommands;
+ (id)waitForCommandsWithDictionary:(id)arg1 context:(id)arg2;

- (id)commandAceIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCommandAceIds:(id)arg1;

@end
