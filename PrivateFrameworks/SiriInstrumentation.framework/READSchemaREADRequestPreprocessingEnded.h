
@interface READSchemaREADRequestPreprocessingEnded : SISchemaInstrumentationMessage {
    unsigned int  _articleTextLength;
    float  _estimatedDuration;
    struct { 
        unsigned int articleTextLength : 1; 
        unsigned int utteranceCount : 1; 
        unsigned int estimatedDuration : 1; 
    }  _has;
    unsigned int  _utteranceCount;
}

@property (nonatomic) unsigned int articleTextLength;
@property (nonatomic) float estimatedDuration;
@property (nonatomic) bool hasArticleTextLength;
@property (nonatomic) bool hasEstimatedDuration;
@property (nonatomic) bool hasUtteranceCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int utteranceCount;

- (unsigned int)articleTextLength;
- (void)deleteArticleTextLength;
- (void)deleteEstimatedDuration;
- (void)deleteUtteranceCount;
- (id)dictionaryRepresentation;
- (float)estimatedDuration;
- (bool)hasArticleTextLength;
- (bool)hasEstimatedDuration;
- (bool)hasUtteranceCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setArticleTextLength:(unsigned int)arg1;
- (void)setEstimatedDuration:(float)arg1;
- (void)setHasArticleTextLength:(bool)arg1;
- (void)setHasEstimatedDuration:(bool)arg1;
- (void)setHasUtteranceCount:(bool)arg1;
- (void)setUtteranceCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)utteranceCount;
- (void)writeTo:(id)arg1;

@end
