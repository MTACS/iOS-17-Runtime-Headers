
@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPHandcraftedRules : PBCodable <NSCopying> {
    NSMutableArray * _ruleIds;
}

@property (nonatomic, retain) NSMutableArray *ruleIds;

+ (Class)ruleIdsType;

- (void).cxx_destruct;
- (void)addRuleIds:(id)arg1;
- (void)clearRuleIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)ruleIds;
- (id)ruleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)ruleIdsCount;
- (void)setRuleIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
