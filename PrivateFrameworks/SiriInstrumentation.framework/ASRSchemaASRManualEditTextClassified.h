
@interface ASRSchemaASRManualEditTextClassified : SISchemaInstrumentationMessage {
    bool  _hasOriginalAsrId;
    NSArray * _manualEdits;
    SISchemaUUID * _originalAsrId;
}

@property (nonatomic) bool hasOriginalAsrId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *manualEdits;
@property (nonatomic, retain) SISchemaUUID *originalAsrId;

- (void).cxx_destruct;
- (void)addManualEdits:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearManualEdits;
- (void)deleteManualEdits;
- (void)deleteOriginalAsrId;
- (id)dictionaryRepresentation;
- (bool)hasOriginalAsrId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)manualEdits;
- (id)manualEditsAtIndex:(unsigned long long)arg1;
- (unsigned long long)manualEditsCount;
- (id)originalAsrId;
- (bool)readFrom:(id)arg1;
- (void)setHasOriginalAsrId:(bool)arg1;
- (void)setManualEdits:(id)arg1;
- (void)setOriginalAsrId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
