
@interface VCPProtoImageJunkResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _confidence;
}

@property (nonatomic) float confidence;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)writeTo:(id)arg1;

@end
