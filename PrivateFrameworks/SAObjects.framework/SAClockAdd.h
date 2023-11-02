
@interface SAClockAdd : SADomainCommand

@property (nonatomic, retain) SAClockObject *clockToAdd;

+ (id)add;
+ (id)addWithDictionary:(id)arg1 context:(id)arg2;

- (id)clockToAdd;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClockToAdd:(id)arg1;

@end
