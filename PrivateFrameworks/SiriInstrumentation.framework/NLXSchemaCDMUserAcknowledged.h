
@interface NLXSchemaCDMUserAcknowledged : SISchemaInstrumentationMessage {
    bool  _hasSystemDialogActId;
    SISchemaUUID * _systemDialogActId;
}

@property (nonatomic) bool hasSystemDialogActId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *systemDialogActId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSystemDialogActId;
- (id)dictionaryRepresentation;
- (bool)hasSystemDialogActId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSystemDialogActId:(bool)arg1;
- (void)setSystemDialogActId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)systemDialogActId;
- (void)writeTo:(id)arg1;

@end
