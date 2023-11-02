
@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted : SISchemaInstrumentationMessage {
    unsigned int  _endSampleCount;
    struct { 
        unsigned int pageNumber : 1; 
        unsigned int topScoreForUtterance : 1; 
        unsigned int startSampleCount : 1; 
        unsigned int endSampleCount : 1; 
        unsigned int hasSpeechDetected : 1; 
    }  _has;
    bool  _hasPhraseId;
    bool  _hasSpeechDetected;
    unsigned int  _pageNumber;
    NSString * _phraseId;
    unsigned int  _startSampleCount;
    float  _topScoreForUtterance;
}

@property (nonatomic) unsigned int endSampleCount;
@property (nonatomic) bool hasEndSampleCount;
@property (nonatomic) bool hasHasSpeechDetected;
@property (nonatomic) bool hasPageNumber;
@property (nonatomic) bool hasPhraseId;
@property (nonatomic) bool hasSpeechDetected;
@property (nonatomic) bool hasStartSampleCount;
@property (nonatomic) bool hasTopScoreForUtterance;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int pageNumber;
@property (nonatomic, copy) NSString *phraseId;
@property (nonatomic) unsigned int startSampleCount;
@property (nonatomic) float topScoreForUtterance;

- (void).cxx_destruct;
- (void)deleteEndSampleCount;
- (void)deleteHasSpeechDetected;
- (void)deletePageNumber;
- (void)deletePhraseId;
- (void)deleteStartSampleCount;
- (void)deleteTopScoreForUtterance;
- (id)dictionaryRepresentation;
- (unsigned int)endSampleCount;
- (bool)hasEndSampleCount;
- (bool)hasHasSpeechDetected;
- (bool)hasPageNumber;
- (bool)hasPhraseId;
- (bool)hasSpeechDetected;
- (bool)hasStartSampleCount;
- (bool)hasTopScoreForUtterance;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)pageNumber;
- (id)phraseId;
- (bool)readFrom:(id)arg1;
- (void)setEndSampleCount:(unsigned int)arg1;
- (void)setHasEndSampleCount:(bool)arg1;
- (void)setHasHasSpeechDetected:(bool)arg1;
- (void)setHasPageNumber:(bool)arg1;
- (void)setHasPhraseId:(bool)arg1;
- (void)setHasSpeechDetected:(bool)arg1;
- (void)setHasStartSampleCount:(bool)arg1;
- (void)setHasTopScoreForUtterance:(bool)arg1;
- (void)setPageNumber:(unsigned int)arg1;
- (void)setPhraseId:(id)arg1;
- (void)setStartSampleCount:(unsigned int)arg1;
- (void)setTopScoreForUtterance:(float)arg1;
- (unsigned int)startSampleCount;
- (id)suppressMessageUnderConditions;
- (float)topScoreForUtterance;
- (void)writeTo:(id)arg1;

@end
