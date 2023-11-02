
@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage {
    SISchemaUUID * _asrId;
    NSArray * _confusionPairs;
    NSString * _datapackVersion;
    int  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasAsrId;
    bool  _hasDatapackVersion;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, retain) SISchemaUUID *asrId;
@property (nonatomic, copy) NSArray *confusionPairs;
@property (nonatomic, copy) NSString *datapackVersion;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasAsrId;
@property (nonatomic) bool hasDatapackVersion;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addConfusionPairs:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asrId;
- (void)clearConfusionPairs;
- (id)confusionPairs;
- (id)confusionPairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)confusionPairsCount;
- (id)datapackVersion;
- (void)deleteAsrId;
- (void)deleteConfusionPairs;
- (void)deleteDatapackVersion;
- (void)deleteErrorCode;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasAsrId;
- (bool)hasDatapackVersion;
- (bool)hasErrorCode;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setAsrId:(id)arg1;
- (void)setConfusionPairs:(id)arg1;
- (void)setDatapackVersion:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasAsrId:(bool)arg1;
- (void)setHasDatapackVersion:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
