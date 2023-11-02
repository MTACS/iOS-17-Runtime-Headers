
@interface SAGetClientState : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *statesToGet;

+ (id)getClientState;
+ (id)getClientStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setStatesToGet:(id)arg1;
- (id)statesToGet;

@end
