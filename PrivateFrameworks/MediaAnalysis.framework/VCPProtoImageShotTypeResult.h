
@interface VCPProtoImageShotTypeResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    int  _shotType;
}

@property (nonatomic) int shotType;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShotType:(int)arg1;
- (int)shotType;
- (void)writeTo:(id)arg1;

@end
