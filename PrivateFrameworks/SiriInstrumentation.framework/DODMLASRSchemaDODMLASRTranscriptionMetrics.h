
@interface DODMLASRSchemaDODMLASRTranscriptionMetrics : SISchemaInstrumentationMessage {
    DODMLASRSchemaDODMLASRTranscriptMetadata * _dev;
    DODMLASRSchemaDODMLASRTranscriptMetadata * _external;
    bool  _hasDev;
    bool  _hasExternal;
    bool  _hasTest;
    bool  _hasTrain;
    DODMLASRSchemaDODMLASRTranscriptMetadata * _test;
    DODMLASRSchemaDODMLASRTranscriptMetadata * _train;
}

@property (nonatomic, retain) DODMLASRSchemaDODMLASRTranscriptMetadata *dev;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRTranscriptMetadata *external;
@property (nonatomic) bool hasDev;
@property (nonatomic) bool hasExternal;
@property (nonatomic) bool hasTest;
@property (nonatomic) bool hasTrain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRTranscriptMetadata *test;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRTranscriptMetadata *train;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDev;
- (void)deleteExternal;
- (void)deleteTest;
- (void)deleteTrain;
- (id)dev;
- (id)dictionaryRepresentation;
- (id)external;
- (bool)hasDev;
- (bool)hasExternal;
- (bool)hasTest;
- (bool)hasTrain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDev:(id)arg1;
- (void)setExternal:(id)arg1;
- (void)setHasDev:(bool)arg1;
- (void)setHasExternal:(bool)arg1;
- (void)setHasTest:(bool)arg1;
- (void)setHasTrain:(bool)arg1;
- (void)setTest:(id)arg1;
- (void)setTrain:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)test;
- (id)train;
- (void)writeTo:(id)arg1;

@end
