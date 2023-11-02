
@interface CLPInstSchemaCLPCDMReplaySampleEnded : SISchemaInstrumentationMessage {
    NSArray * _comparatorResults;
    struct { 
        unsigned int isReplaySuccessful : 1; 
    }  _has;
    bool  _isReplaySuccessful;
}

@property (nonatomic, copy) NSArray *comparatorResults;
@property (nonatomic) bool hasIsReplaySuccessful;
@property (nonatomic) bool isReplaySuccessful;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addComparatorResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearComparatorResults;
- (id)comparatorResults;
- (id)comparatorResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)comparatorResultsCount;
- (void)deleteComparatorResults;
- (void)deleteIsReplaySuccessful;
- (id)dictionaryRepresentation;
- (bool)hasIsReplaySuccessful;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReplaySuccessful;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setComparatorResults:(id)arg1;
- (void)setHasIsReplaySuccessful:(bool)arg1;
- (void)setIsReplaySuccessful:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
