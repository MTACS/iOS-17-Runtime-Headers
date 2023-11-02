
@interface CAARSchemaCAARTieBreakersExecuted : SISchemaInstrumentationMessage {
    NSArray * _tiebreakers;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tiebreakers;

- (void).cxx_destruct;
- (void)addTiebreakers:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTiebreakers;
- (void)deleteTiebreakers;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setTiebreakers:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tiebreakers;
- (id)tiebreakersAtIndex:(unsigned long long)arg1;
- (unsigned long long)tiebreakersCount;
- (void)writeTo:(id)arg1;

@end
