
@interface SIRINLUINTERNALSNLP_INTERMEDIATEContextFeaturizerResponse : PBCodable <NSCopying> {
    SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor * _tensor;
}

@property (nonatomic, readonly) bool hasTensor;
@property (nonatomic, retain) SIRINLUINTERNALSNLP_INTERMEDIATELinearizedTensor *tensor;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTensor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTensor:(id)arg1;
- (id)tensor;
- (void)writeTo:(id)arg1;

@end
