
@interface CLPInstSchemaCLPNLv4SampleEvaluationStarted : SISchemaInstrumentationMessage {
    unsigned int  _batchChunkId;
    unsigned int  _batchNumChunks;
    struct { 
        unsigned int batchNumChunks : 1; 
        unsigned int batchChunkId : 1; 
    }  _has;
    bool  _hasSyntheticRequestId;
    SISchemaUUID * _syntheticRequestId;
}

@property (nonatomic) unsigned int batchChunkId;
@property (nonatomic) unsigned int batchNumChunks;
@property (nonatomic) bool hasBatchChunkId;
@property (nonatomic) bool hasBatchNumChunks;
@property (nonatomic) bool hasSyntheticRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *syntheticRequestId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)batchChunkId;
- (unsigned int)batchNumChunks;
- (void)deleteBatchChunkId;
- (void)deleteBatchNumChunks;
- (void)deleteSyntheticRequestId;
- (id)dictionaryRepresentation;
- (bool)hasBatchChunkId;
- (bool)hasBatchNumChunks;
- (bool)hasSyntheticRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBatchChunkId:(unsigned int)arg1;
- (void)setBatchNumChunks:(unsigned int)arg1;
- (void)setHasBatchChunkId:(bool)arg1;
- (void)setHasBatchNumChunks:(bool)arg1;
- (void)setHasSyntheticRequestId:(bool)arg1;
- (void)setSyntheticRequestId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)syntheticRequestId;
- (void)writeTo:(id)arg1;

@end
