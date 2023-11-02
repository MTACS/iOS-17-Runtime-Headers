
@protocol CRKASMRoster <NSObject>

@required

- (NSSet *)allTrustedUserCertificates;
- (NSArray *)courses;
- (<CRKASMOrganization> *)organization;
- (<CRKASMUser> *)user;

@end
