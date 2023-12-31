
@interface SACheckAuthenticationRequirement : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *restrictionsOnCompanion;

+ (id)checkAuthenticationRequirement;
+ (id)checkAuthenticationRequirementWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (id)restrictionsOnCompanion;
- (void)setRestrictionsOnCompanion:(id)arg1;

@end
