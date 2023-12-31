
@interface SAMPSetState : SADomainCommand

@property (nonatomic) int state;

+ (id)setState;
+ (id)setStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setState:(int)arg1;
- (int)state;

@end
