
@interface NPKProtoAutomaticProvisioningRequest : PBRequest <NSCopying> {
    int  _cardType;
    unsigned long long  _credentialType;
    struct { 
        unsigned int credentialType : 1; 
        unsigned int cardType : 1; 
    }  _has;
    NSString * _localizedName;
    NSString * _passTypeIdentifier;
    NSString * _primaryAccountNumberSuffix;
    NSString * _serialNumber;
}

@property (nonatomic) int cardType;
@property (nonatomic) unsigned long long credentialType;
@property (nonatomic) bool hasCardType;
@property (nonatomic) bool hasCredentialType;
@property (nonatomic, readonly) bool hasLocalizedName;
@property (nonatomic, readonly) bool hasPassTypeIdentifier;
@property (nonatomic, readonly) bool hasPrimaryAccountNumberSuffix;
@property (nonatomic, readonly) bool hasSerialNumber;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSString *primaryAccountNumberSuffix;
@property (nonatomic, retain) NSString *serialNumber;

- (void).cxx_destruct;
- (int)StringAsCardType:(id)arg1;
- (int)cardType;
- (id)cardTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)credentialType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCardType;
- (bool)hasCredentialType;
- (bool)hasLocalizedName;
- (bool)hasPassTypeIdentifier;
- (bool)hasPrimaryAccountNumberSuffix;
- (bool)hasSerialNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (void)mergeFrom:(id)arg1;
- (id)passTypeIdentifier;
- (id)primaryAccountNumberSuffix;
- (bool)readFrom:(id)arg1;
- (id)serialNumber;
- (void)setCardType:(int)arg1;
- (void)setCredentialType:(unsigned long long)arg1;
- (void)setHasCardType:(bool)arg1;
- (void)setHasCredentialType:(bool)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)writeTo:(id)arg1;

@end
