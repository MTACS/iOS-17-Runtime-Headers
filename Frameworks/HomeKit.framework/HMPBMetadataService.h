
@interface HMPBMetadataService : PBCodable <NSCopying> {
    NSString * _svcDescription;
    NSString * _uuidStr;
}

@property (nonatomic, readonly) bool hasSvcDescription;
@property (nonatomic, readonly) bool hasUuidStr;
@property (nonatomic, retain) NSString *svcDescription;
@property (nonatomic, retain) NSString *uuidStr;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSvcDescription;
- (bool)hasUuidStr;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSvcDescription:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (id)svcDescription;
- (id)uuidStr;
- (void)writeTo:(id)arg1;

@end
