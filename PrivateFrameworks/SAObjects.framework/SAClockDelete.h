
@interface SAClockDelete : SADomainCommand

@property (nonatomic, copy) NSArray *clockIds;

- (id)clockIds;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setClockIds:(id)arg1;

@end
