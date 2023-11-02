
@interface CAMLibrarySelectionIdentity : NSObject <CAMLibrarySelectionIdentityProtocol> {
    NSArray * _contactIdentifiers;
    NSString * _emailAddress;
    NSString * _phoneNumber;
}

@property (readonly) NSArray *contactIdentifiers;
@property (readonly) NSString *emailAddress;
@property (readonly) NSString *phoneNumber;

+ (id)identityWithDevice:(id)arg1;
+ (id)identityWithPerson:(id)arg1;
+ (id)identityWithPhotosIdentity:(id)arg1;

- (void).cxx_destruct;
- (id)contactIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (unsigned long long)hash;
- (id)initWithPhoneNumber:(id)arg1 emailAddress:(id)arg2 contactIdentifiers:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;

@end
