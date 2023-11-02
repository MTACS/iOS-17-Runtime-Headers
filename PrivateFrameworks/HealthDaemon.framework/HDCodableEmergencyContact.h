
@interface HDCodableEmergencyContact : PBCodable <NSCopying> {
    NSString * _name;
    NSString * _nameContactIdentifier;
    NSString * _phoneNumber;
    NSString * _phoneNumberContactIdentifier;
    NSString * _phoneNumberLabel;
    NSString * _relationship;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameContactIdentifier;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasPhoneNumberContactIdentifier;
@property (nonatomic, readonly) bool hasPhoneNumberLabel;
@property (nonatomic, readonly) bool hasRelationship;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameContactIdentifier;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *phoneNumberContactIdentifier;
@property (nonatomic, retain) NSString *phoneNumberLabel;
@property (nonatomic, retain) NSString *relationship;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasNameContactIdentifier;
- (bool)hasPhoneNumber;
- (bool)hasPhoneNumberContactIdentifier;
- (bool)hasPhoneNumberLabel;
- (bool)hasRelationship;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)nameContactIdentifier;
- (id)phoneNumber;
- (id)phoneNumberContactIdentifier;
- (id)phoneNumberLabel;
- (bool)readFrom:(id)arg1;
- (id)relationship;
- (void)setName:(id)arg1;
- (void)setNameContactIdentifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPhoneNumberContactIdentifier:(id)arg1;
- (void)setPhoneNumberLabel:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)writeTo:(id)arg1;

@end
