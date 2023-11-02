
@interface SIRINLUINTERNALTurnInputRule : PBCodable <NSCopying> {
    NSMutableArray * _negativeContextRules;
    NSMutableArray * _positiveContextRules;
    SIRINLUINTERNALUtteranceRule * _utteranceRule;
}

@property (nonatomic, readonly) bool hasUtteranceRule;
@property (nonatomic, retain) NSMutableArray *negativeContextRules;
@property (nonatomic, retain) NSMutableArray *positiveContextRules;
@property (nonatomic, retain) SIRINLUINTERNALUtteranceRule *utteranceRule;

+ (Class)negativeContextRulesType;
+ (Class)positiveContextRulesType;

- (void).cxx_destruct;
- (void)addNegativeContextRules:(id)arg1;
- (void)addPositiveContextRules:(id)arg1;
- (void)clearNegativeContextRules;
- (void)clearPositiveContextRules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUtteranceRule;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)negativeContextRules;
- (id)negativeContextRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)negativeContextRulesCount;
- (id)positiveContextRules;
- (id)positiveContextRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)positiveContextRulesCount;
- (bool)readFrom:(id)arg1;
- (void)setNegativeContextRules:(id)arg1;
- (void)setPositiveContextRules:(id)arg1;
- (void)setUtteranceRule:(id)arg1;
- (id)utteranceRule;
- (void)writeTo:(id)arg1;

@end
