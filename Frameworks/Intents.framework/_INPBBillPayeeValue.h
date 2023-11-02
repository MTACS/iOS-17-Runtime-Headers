
@interface _INPBBillPayeeValue : PBCodable <NSCopying, NSSecureCoding, _INPBBillPayeeValue> {
    NSString * _accountNumber;
    struct { }  _has;
    _INPBDataString * _nickname;
    _INPBDataString * _organizationName;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) NSString *accountNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAccountNumber;
@property (nonatomic, readonly) bool hasNickname;
@property (nonatomic, readonly) bool hasOrganizationName;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDataString *nickname;
@property (nonatomic, retain) _INPBDataString *organizationName;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAccountNumber;
- (bool)hasNickname;
- (bool)hasOrganizationName;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nickname;
- (id)organizationName;
- (bool)readFrom:(id)arg1;
- (void)setAccountNumber:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
