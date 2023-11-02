
@interface PKProtobufPaymentTokenContext : PBCodable <NSCopying> {
    long long  _amount;
    PKProtobufCustomPrecisionAmount * _customPrecisionAmount;
    NSString * _externalIdentifier;
    struct { 
        unsigned int amount : 1; 
    }  _has;
    NSString * _merchantDomain;
    NSString * _merchantIdentifier;
    NSString * _merchantName;
}

@property (nonatomic) long long amount;
@property (nonatomic, retain) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasCustomPrecisionAmount;
@property (nonatomic, readonly) bool hasExternalIdentifier;
@property (nonatomic, readonly) bool hasMerchantDomain;
@property (nonatomic, readonly) bool hasMerchantIdentifier;
@property (nonatomic, readonly) bool hasMerchantName;
@property (nonatomic, retain) NSString *merchantDomain;
@property (nonatomic, retain) NSString *merchantIdentifier;
@property (nonatomic, retain) NSString *merchantName;

- (void).cxx_destruct;
- (long long)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPrecisionAmount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalIdentifier;
- (bool)hasAmount;
- (bool)hasCustomPrecisionAmount;
- (bool)hasExternalIdentifier;
- (bool)hasMerchantDomain;
- (bool)hasMerchantIdentifier;
- (bool)hasMerchantName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)merchantDomain;
- (id)merchantIdentifier;
- (id)merchantName;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmount:(long long)arg1;
- (void)setCustomPrecisionAmount:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setHasAmount:(bool)arg1;
- (void)setMerchantDomain:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setMerchantName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
