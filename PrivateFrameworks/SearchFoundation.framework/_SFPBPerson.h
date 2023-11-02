
@interface _SFPBPerson : PBCodable <NSSecureCoding, _SFPBPerson> {
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
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSArray *emailAddresses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *personIdentifier;
@property (nonatomic, copy) NSArray *phoneNumbers;
@property (nonatomic, copy) NSString *photosIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEmailAddresses:(id)arg1;
- (void)addPhoneNumbers:(id)arg1;
- (void)clearEmailAddresses;
- (void)clearPhoneNumbers;
- (id)contactIdentifier;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)emailAddresses;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailAddressesCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)personIdentifier;
- (id)phoneNumbers;
- (id)phoneNumbersAtIndex:(unsigned long long)arg1;
- (unsigned long long)phoneNumbersCount;
- (id)photosIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setPersonIdentifier:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPhotosIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
