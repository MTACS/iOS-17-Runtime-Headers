
@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *clientStateGetters;

+ (id)getMultipleClientStates;
+ (id)getMultipleClientStatesWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientStateGetters;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setClientStateGetters:(id)arg1;

@end
