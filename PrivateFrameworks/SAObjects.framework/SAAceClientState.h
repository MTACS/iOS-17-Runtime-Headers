
@interface SAAceClientState : SADomainObject

+ (id)aceClientState;
+ (id)aceClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
