
@interface SIRINLUINTERNALSNLP_INTERMEDIATENLv4AssetVersion : PBCodable <NSCopying> {
    SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion * _version;
}

@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion *version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
