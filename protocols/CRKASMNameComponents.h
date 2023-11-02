
@protocol CRKASMNameComponents <NSObject>

@required

- (NSString *)familyName;
- (NSString *)fullName;
- (NSString *)givenName;
- (NSString *)givenNameFamilyInitial;
- (NSString *)monogram;
- (NSString *)phoneticFamilyName;
- (NSString *)phoneticFullName;
- (NSString *)phoneticGivenName;

@end
