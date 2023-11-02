
@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationEnded : SISchemaInstrumentationMessage {
    unsigned int  _classifiedSampleCount;
    struct { 
        unsigned int sampleCount : 1; 
        unsigned int classifiedSampleCount : 1; 
        unsigned int positiveCount : 1; 
    }  _has;
    unsigned int  _positiveCount;
    unsigned int  _sampleCount;
}

@property (nonatomic) unsigned int classifiedSampleCount;
@property (nonatomic) bool hasClassifiedSampleCount;
@property (nonatomic) bool hasPositiveCount;
@property (nonatomic) bool hasSampleCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int positiveCount;
@property (nonatomic) unsigned int sampleCount;

- (unsigned int)classifiedSampleCount;
- (void)deleteClassifiedSampleCount;
- (void)deletePositiveCount;
- (void)deleteSampleCount;
- (id)dictionaryRepresentation;
- (bool)hasClassifiedSampleCount;
- (bool)hasPositiveCount;
- (bool)hasSampleCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)positiveCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)sampleCount;
- (void)setClassifiedSampleCount:(unsigned int)arg1;
- (void)setHasClassifiedSampleCount:(bool)arg1;
- (void)setHasPositiveCount:(bool)arg1;
- (void)setHasSampleCount:(bool)arg1;
- (void)setPositiveCount:(unsigned int)arg1;
- (void)setSampleCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
