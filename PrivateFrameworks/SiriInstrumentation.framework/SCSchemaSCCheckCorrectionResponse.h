
@interface SCSchemaSCCheckCorrectionResponse : SISchemaInstrumentationMessage {
    unsigned int  _candidateCount;
    struct { 
        unsigned int candidateCount : 1; 
    }  _has;
    NSArray * _results;
}

@property (nonatomic) unsigned int candidateCount;
@property (nonatomic) bool hasCandidateCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)candidateCount;
- (void)clearResults;
- (void)deleteCandidateCount;
- (void)deleteResults;
- (id)dictionaryRepresentation;
- (bool)hasCandidateCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setCandidateCount:(unsigned int)arg1;
- (void)setHasCandidateCount:(bool)arg1;
- (void)setResults:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
