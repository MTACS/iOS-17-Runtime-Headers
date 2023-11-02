
@interface SIRINLUINTERNALSNLP_INTERMEDIATEITFMExecutedHandcraftedRules : PBCodable <NSCopying> {
    NSString * _modelType;
    SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules * _rules;
}

@property (nonatomic, readonly) bool hasModelType;
@property (nonatomic, readonly) bool hasRules;
@property (nonatomic, retain) NSString *modelType;
@property (nonatomic, retain) SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules *rules;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelType;
- (bool)hasRules;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelType;
- (bool)readFrom:(id)arg1;
- (id)rules;
- (void)setModelType:(id)arg1;
- (void)setRules:(id)arg1;
- (void)writeTo:(id)arg1;

@end
