
@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int pageNumber : 1; 
        unsigned int maxNumContinuousZeros : 1; 
        unsigned int maxNumAllowedContinuousZeros : 1; 
        unsigned int isMaxNumContinuousZerosOverThreshold : 1; 
    }  _has;
    bool  _hasPhraseId;
    bool  _isMaxNumContinuousZerosOverThreshold;
    unsigned int  _maxNumAllowedContinuousZeros;
    unsigned int  _maxNumContinuousZeros;
    unsigned int  _pageNumber;
    NSString * _phraseId;
}

@property (nonatomic) bool hasIsMaxNumContinuousZerosOverThreshold;
@property (nonatomic) bool hasMaxNumAllowedContinuousZeros;
@property (nonatomic) bool hasMaxNumContinuousZeros;
@property (nonatomic) bool hasPageNumber;
@property (nonatomic) bool hasPhraseId;
@property (nonatomic) bool isMaxNumContinuousZerosOverThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int maxNumAllowedContinuousZeros;
@property (nonatomic) unsigned int maxNumContinuousZeros;
@property (nonatomic) unsigned int pageNumber;
@property (nonatomic, copy) NSString *phraseId;

- (void).cxx_destruct;
- (void)deleteIsMaxNumContinuousZerosOverThreshold;
- (void)deleteMaxNumAllowedContinuousZeros;
- (void)deleteMaxNumContinuousZeros;
- (void)deletePageNumber;
- (void)deletePhraseId;
- (id)dictionaryRepresentation;
- (bool)hasIsMaxNumContinuousZerosOverThreshold;
- (bool)hasMaxNumAllowedContinuousZeros;
- (bool)hasMaxNumContinuousZeros;
- (bool)hasPageNumber;
- (bool)hasPhraseId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMaxNumContinuousZerosOverThreshold;
- (id)jsonData;
- (unsigned int)maxNumAllowedContinuousZeros;
- (unsigned int)maxNumContinuousZeros;
- (unsigned int)pageNumber;
- (id)phraseId;
- (bool)readFrom:(id)arg1;
- (void)setHasIsMaxNumContinuousZerosOverThreshold:(bool)arg1;
- (void)setHasMaxNumAllowedContinuousZeros:(bool)arg1;
- (void)setHasMaxNumContinuousZeros:(bool)arg1;
- (void)setHasPageNumber:(bool)arg1;
- (void)setHasPhraseId:(bool)arg1;
- (void)setIsMaxNumContinuousZerosOverThreshold:(bool)arg1;
- (void)setMaxNumAllowedContinuousZeros:(unsigned int)arg1;
- (void)setMaxNumContinuousZeros:(unsigned int)arg1;
- (void)setPageNumber:(unsigned int)arg1;
- (void)setPhraseId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
