
@interface SADomainCommand : SABaseClientBoundCommand

@property (nonatomic, copy) NSURL *targetAppId;
@property (nonatomic, copy) NSURL *targetPluginId;
@property (nonatomic, copy) NSNumber *timeout;

+ (id)domainCommand;
+ (id)domainCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (void)setTargetPluginId:(id)arg1;
- (void)setTimeout:(id)arg1;
- (id)targetAppId;
- (id)targetPluginId;
- (id)timeout;

@end
