
@interface PEGASUSSchemaPEGASUSWebAnswerExecutionTier1 : SISchemaInstrumentationMessage {
    NSString * _answerId;
    bool  _hasAnswerId;
}

@property (nonatomic, copy) NSString *answerId;
@property (nonatomic) bool hasAnswerId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)answerId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAnswerId;
- (id)dictionaryRepresentation;
- (bool)hasAnswerId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAnswerId:(id)arg1;
- (void)setHasAnswerId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
