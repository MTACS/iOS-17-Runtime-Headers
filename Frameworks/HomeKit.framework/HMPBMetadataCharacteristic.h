
@interface HMPBMetadataCharacteristic : PBCodable <NSCopying> {
    NSString * _chrDescription;
    NSString * _uuidStr;
}

@property (nonatomic, retain) NSString *chrDescription;
@property (nonatomic, readonly) bool hasChrDescription;
@property (nonatomic, readonly) bool hasUuidStr;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (id)chrDescription;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChrDescription;
- (bool)hasUuidStr;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChrDescription:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (id)uuidStr;
- (void)writeTo:(id)arg1;

@end
