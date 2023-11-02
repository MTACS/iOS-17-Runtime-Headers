
@interface SCSchemaSCUndoSet : SISchemaInstrumentationMessage {
    bool  _hasSetUndoArgs;
    SCSchemaSCSetUndoArgs * _setUndoArgs;
}

@property (nonatomic) bool hasSetUndoArgs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SCSchemaSCSetUndoArgs *setUndoArgs;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSetUndoArgs;
- (id)dictionaryRepresentation;
- (bool)hasSetUndoArgs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSetUndoArgs:(bool)arg1;
- (void)setSetUndoArgs:(id)arg1;
- (id)setUndoArgs;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
