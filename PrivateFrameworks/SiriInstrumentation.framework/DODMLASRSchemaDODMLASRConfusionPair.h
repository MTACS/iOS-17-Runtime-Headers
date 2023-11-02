
@interface DODMLASRSchemaDODMLASRConfusionPair : SISchemaInstrumentationMessage {
    SISchemaUUID * _asrId;
    int  _editMethod;
    int  _editReason;
    int  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int editMethod : 1; 
        unsigned int editReason : 1; 
        unsigned int recognizedTextStartIndex : 1; 
    }  _has;
    bool  _hasAsrId;
    int  _recognizedTextStartIndex;
}

@property (nonatomic, retain) SISchemaUUID *asrId;
@property (nonatomic) int editMethod;
@property (nonatomic) int editReason;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasAsrId;
@property (nonatomic) bool hasEditMethod;
@property (nonatomic) bool hasEditReason;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasRecognizedTextStartIndex;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int recognizedTextStartIndex;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)asrId;
- (void)deleteAsrId;
- (void)deleteEditMethod;
- (void)deleteEditReason;
- (void)deleteErrorCode;
- (void)deleteRecognizedTextStartIndex;
- (id)dictionaryRepresentation;
- (int)editMethod;
- (int)editReason;
- (int)errorCode;
- (bool)hasAsrId;
- (bool)hasEditMethod;
- (bool)hasEditReason;
- (bool)hasErrorCode;
- (bool)hasRecognizedTextStartIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)recognizedTextStartIndex;
- (void)setAsrId:(id)arg1;
- (void)setEditMethod:(int)arg1;
- (void)setEditReason:(int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasAsrId:(bool)arg1;
- (void)setHasEditMethod:(bool)arg1;
- (void)setHasEditReason:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasRecognizedTextStartIndex:(bool)arg1;
- (void)setRecognizedTextStartIndex:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
