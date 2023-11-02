
@interface PEGASUSSchemaPEGASUSRewrittenUtteranceTier1 : SISchemaInstrumentationMessage {
    bool  _hasRewrittenUtterance;
    NSString * _rewrittenUtterance;
}

@property (nonatomic) bool hasRewrittenUtterance;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *rewrittenUtterance;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRewrittenUtterance;
- (id)dictionaryRepresentation;
- (bool)hasRewrittenUtterance;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)rewrittenUtterance;
- (void)setHasRewrittenUtterance:(bool)arg1;
- (void)setRewrittenUtterance:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
