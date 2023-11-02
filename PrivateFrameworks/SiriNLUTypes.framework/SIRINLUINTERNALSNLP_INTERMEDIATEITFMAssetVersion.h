
@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMAssetVersion : PBCodable <NSCopying> {
    NSString * _modelType;
    SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion * _version;
}

@property (nonatomic, readonly) bool hasModelType;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *modelType;
@property (nonatomic, retain) SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion *version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelType;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelType;
- (bool)readFrom:(id)arg1;
- (void)setModelType:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
