
@interface INFERENCESchemaINFERENCEClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasInferenceId;
    SISchemaUUID * _inferenceId;
}

@property (nonatomic) bool hasInferenceId;
@property (nonatomic, retain) SISchemaUUID *inferenceId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteInferenceId;
- (id)dictionaryRepresentation;
- (bool)hasInferenceId;
- (unsigned long long)hash;
- (id)inferenceId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInferenceId:(bool)arg1;
- (void)setInferenceId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
