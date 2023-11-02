
@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMContextFeaturizerResponse : PBCodable <NSCopying> {
    NSString * _modelType;
    SIRINLUINTERNALSNLP_INTERMEDIATEContextFeaturizerResponse * _response;
}

@property (nonatomic, readonly) bool hasModelType;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, retain) NSString *modelType;
@property (nonatomic, retain) SIRINLUINTERNALSNLP_INTERMEDIATEContextFeaturizerResponse *response;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelType;
- (bool)hasResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelType;
- (bool)readFrom:(id)arg1;
- (id)response;
- (void)setModelType:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)writeTo:(id)arg1;

@end
