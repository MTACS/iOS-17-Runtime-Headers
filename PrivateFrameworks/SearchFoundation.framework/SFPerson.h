
@interface SFPerson : NSObject <NSCopying, NSSecureCoding, SFPerson> {
    NSString * _contactIdentifier;
    NSString * _displayName;
    NSArray * _emailAddresses;
    NSString * _personIdentifier;
    NSArray * _phoneNumbers;
    NSString * _photosIdentifier;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *personIdentifier;
@property (nonatomic, copy) NSArray *phoneNumbers;
@property (nonatomic, copy) NSString *photosIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)personIdentifier;
- (id)phoneNumbers;
- (id)photosIdentifier;
- (void)setContactIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setPersonIdentifier:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPhotosIdentifier:(id)arg1;

@end
