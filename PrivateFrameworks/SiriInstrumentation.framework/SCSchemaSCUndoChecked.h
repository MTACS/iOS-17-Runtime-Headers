
@interface SCSchemaSCUndoChecked : SISchemaInstrumentationMessage {
    SCSchemaSCCheckUndoResponse * _checkUndoResponse;
    bool  _hasCheckUndoResponse;
}

@property (nonatomic, retain) SCSchemaSCCheckUndoResponse *checkUndoResponse;
@property (nonatomic) bool hasCheckUndoResponse;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)checkUndoResponse;
- (void)deleteCheckUndoResponse;
- (id)dictionaryRepresentation;
- (bool)hasCheckUndoResponse;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCheckUndoResponse:(id)arg1;
- (void)setHasCheckUndoResponse:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
