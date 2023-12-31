
@interface SAUIDelayedActionCancelCommand : SADomainCommand

@property (nonatomic, copy) NSString *delayedActionAceId;

+ (id)delayedActionCancelCommand;
+ (id)delayedActionCancelCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)delayedActionAceId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDelayedActionAceId:(id)arg1;

@end
