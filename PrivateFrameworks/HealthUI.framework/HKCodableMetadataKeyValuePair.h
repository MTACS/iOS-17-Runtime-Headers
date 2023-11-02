
@interface HKCodableMetadataKeyValuePair : PBCodable <NSCopying> {
    struct APPLE_HKCodableMetadataKeyValuePair_1 { 
        unsigned int numberIntValue : 1; 
    }  _has;
    NSString * _key;
    long long  _numberIntValue;
    HKCodableQuantity * _quantityValue;
    NSString * _stringValue;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasNumberIntValue;
@property (nonatomic, readonly) bool hasQuantityValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) long long numberIntValue;
@property (nonatomic, retain) HKCodableQuantity *quantityValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasNumberIntValue;
- (bool)hasQuantityValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (long long)numberIntValue;
- (id)quantityValue;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberIntValue:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberIntValue:(long long)arg1;
- (void)setQuantityValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
