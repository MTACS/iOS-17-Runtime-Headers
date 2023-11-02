
@interface ASRSchemaASRManualEditClassificationContext : SISchemaInstrumentationMessage {
    ASRSchemaASRManualEditClassificationEnded * _ended;
    ASRSchemaASRManualEditClassificationFailed * _failed;
    bool  _hasEnded;
    bool  _hasFailed;
    bool  _hasOriginalAsrId;
    bool  _hasStartedOrChanged;
    SISchemaUUID * _originalAsrId;
    ASRSchemaASRManualEditClassificationStarted * _startedOrChanged;
    unsigned long long  _whichContextevent;
}

@property (nonatomic, retain) ASRSchemaASRManualEditClassificationEnded *ended;
@property (nonatomic, retain) ASRSchemaASRManualEditClassificationFailed *failed;
@property (nonatomic) bool hasEnded;
@property (nonatomic) bool hasFailed;
@property (nonatomic) bool hasOriginalAsrId;
@property (nonatomic) bool hasStartedOrChanged;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalAsrId;
@property (nonatomic, retain) ASRSchemaASRManualEditClassificationStarted *startedOrChanged;
@property (nonatomic, readonly) unsigned long long whichContextevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteOriginalAsrId;
- (void)deleteStartedOrChanged;
- (id)dictionaryRepresentation;
- (id)ended;
- (id)failed;
- (bool)hasEnded;
- (bool)hasFailed;
- (bool)hasOriginalAsrId;
- (bool)hasStartedOrChanged;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalAsrId;
- (bool)readFrom:(id)arg1;
- (void)setEnded:(id)arg1;
- (void)setFailed:(id)arg1;
- (void)setHasEnded:(bool)arg1;
- (void)setHasFailed:(bool)arg1;
- (void)setHasOriginalAsrId:(bool)arg1;
- (void)setHasStartedOrChanged:(bool)arg1;
- (void)setOriginalAsrId:(id)arg1;
- (void)setStartedOrChanged:(id)arg1;
- (id)startedOrChanged;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichContextevent;
- (void)writeTo:(id)arg1;

@end
