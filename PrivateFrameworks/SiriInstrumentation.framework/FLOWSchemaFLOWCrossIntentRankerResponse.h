
@interface FLOWSchemaFLOWCrossIntentRankerResponse : SISchemaInstrumentationMessage {
    NSArray * _crossDomainRankerScoreKeepers;
    NSArray * _crossIntentRankerScoreKeepers;
}

@property (nonatomic, copy) NSArray *crossDomainRankerScoreKeepers;
@property (nonatomic, copy) NSArray *crossIntentRankerScoreKeepers;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addCrossDomainRankerScoreKeeper:(id)arg1;
- (void)addCrossIntentRankerScoreKeeper:(id)arg1;
- (void)clearCrossDomainRankerScoreKeeper;
- (void)clearCrossIntentRankerScoreKeeper;
- (id)crossDomainRankerScoreKeeperAtIndex:(unsigned long long)arg1;
- (unsigned long long)crossDomainRankerScoreKeeperCount;
- (id)crossDomainRankerScoreKeepers;
- (id)crossIntentRankerScoreKeeperAtIndex:(unsigned long long)arg1;
- (unsigned long long)crossIntentRankerScoreKeeperCount;
- (id)crossIntentRankerScoreKeepers;
- (void)deleteCrossDomainRankerScoreKeeper;
- (void)deleteCrossIntentRankerScoreKeeper;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCrossDomainRankerScoreKeepers:(id)arg1;
- (void)setCrossIntentRankerScoreKeepers:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
