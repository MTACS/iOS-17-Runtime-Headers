
@interface SISchemaSpeechResultSelected : SISchemaInstrumentationMessage {
    struct { 
        unsigned int source : 1; 
    }  _has;
    bool  _hasResultCandidateId;
    NSString * _resultCandidateId;
    int  _source;
}

@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic) int source;

- (void).cxx_destruct;
- (void)deleteResultCandidateId;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (bool)hasResultCandidateId;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
