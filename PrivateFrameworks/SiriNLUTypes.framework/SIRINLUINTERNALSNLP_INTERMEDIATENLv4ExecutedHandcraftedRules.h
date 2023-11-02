
@interface SIRINLUINTERNALSNLP_INTERMEDIATENLv4ExecutedHandcraftedRules : PBCodable <NSCopying> {
    SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules * _rules;
}

@property (nonatomic, readonly) bool hasRules;
@property (nonatomic, retain) SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules *rules;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRules;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rules;
- (void)setRules:(id)arg1;
- (void)writeTo:(id)arg1;

@end
