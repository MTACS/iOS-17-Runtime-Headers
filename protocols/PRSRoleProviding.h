
@protocol PRSRoleProviding <NSObject>

@required

- (NSString *)prs_defaultRole;
- (NSSet *)prs_supportedRoles;

@end
