
@interface BMPBPersonEntity : PBCodable <NSCopying> {
    NSMutableArray * _addresses;
    NSMutableArray * _attributes;
    NSString * _contactId;
    NSString * _customId;
    NSMutableArray * _emailAddresses;
    NSMutableArray * _names;
    NSMutableArray * _phoneNumbers;
    NSMutableArray * _socialMediaHandles;
}

@property (nonatomic, retain) NSMutableArray *addresses;
@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic, retain) NSString *contactId;
@property (nonatomic, retain) NSString *customId;
@property (nonatomic, retain) NSMutableArray *emailAddresses;
@property (nonatomic, readonly) bool hasContactId;
@property (nonatomic, readonly) bool hasCustomId;
@property (nonatomic, retain) NSMutableArray *names;
@property (nonatomic, retain) NSMutableArray *phoneNumbers;
@property (nonatomic, retain) NSMutableArray *socialMediaHandles;

+ (Class)addressesType;
+ (Class)attributesType;
+ (Class)emailAddressesType;
+ (Class)namesType;
+ (Class)phoneNumbersType;
+ (Class)socialMediaHandlesType;

- (void).cxx_destruct;
- (void)addAddresses:(id)arg1;
- (void)addAttributes:(id)arg1;
- (void)addEmailAddresses:(id)arg1;
- (void)addNames:(id)arg1;
- (void)addPhoneNumbers:(id)arg1;
- (void)addSocialMediaHandles:(id)arg1;
- (id)addresses;
- (id)addressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)addressesCount;
- (id)attributes;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)clearAddresses;
- (void)clearAttributes;
- (void)clearEmailAddresses;
- (void)clearNames;
- (void)clearPhoneNumbers;
- (void)clearSocialMediaHandles;
- (id)contactId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailAddresses;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailAddressesCount;
- (bool)hasContactId;
- (bool)hasCustomId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)names;
- (id)namesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (id)phoneNumbers;
- (id)phoneNumbersAtIndex:(unsigned long long)arg1;
- (unsigned long long)phoneNumbersCount;
- (bool)readFrom:(id)arg1;
- (void)setAddresses:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setContactId:(id)arg1;
- (void)setCustomId:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setSocialMediaHandles:(id)arg1;
- (id)socialMediaHandles;
- (id)socialMediaHandlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)socialMediaHandlesCount;
- (void)writeTo:(id)arg1;

@end
