
@protocol CRKASMCourse

@required

- (NSSet *)allTrustedUserCertificates;
- (unsigned long long)color;
- (NSDate *)creationDate;
- (DMFControlGroupIdentifier *)identifier;
- (<CRKIdentity> *)identity;
- (bool)isEditable;
- (<CRKASMLocation> *)location;
- (unsigned long long)mascot;
- (NSString *)name;
- (NSArray *)trustedUsers;
- (NSArray *)users;

@end
