
@interface SAAXSkipAhead : SADomainCommand

+ (id)skipAhead;
+ (id)skipAheadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
