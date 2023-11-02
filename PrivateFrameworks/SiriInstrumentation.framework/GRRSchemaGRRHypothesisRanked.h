
@interface GRRSchemaGRRHypothesisRanked : SISchemaInstrumentationMessage {
    NSArray * _rankings;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *rankings;

- (void).cxx_destruct;
- (void)addRankings:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRankings;
- (void)deleteRankings;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)rankings;
- (id)rankingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rankingsCount;
- (bool)readFrom:(id)arg1;
- (void)setRankings:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
