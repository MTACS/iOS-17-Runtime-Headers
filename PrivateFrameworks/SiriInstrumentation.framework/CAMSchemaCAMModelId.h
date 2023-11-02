
@interface CAMSchemaCAMModelId : SISchemaInstrumentationMessage {
    bool  _hasModelName;
    bool  _hasModelVersion;
    NSString * _modelName;
    SISchemaVersion * _modelVersion;
}

@property (nonatomic) bool hasModelName;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, retain) SISchemaVersion *modelVersion;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteModelName;
- (void)deleteModelVersion;
- (id)dictionaryRepresentation;
- (bool)hasModelName;
- (bool)hasModelVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelName;
- (id)modelVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasModelName:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
