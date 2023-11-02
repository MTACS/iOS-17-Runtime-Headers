
@interface IHSchemaIHModelEvaluationStarted : SISchemaInstrumentationMessage {
    bool  _hasModelId;
    NSString * _modelId;
}

@property (nonatomic) bool hasModelId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelId;

- (void).cxx_destruct;
- (void)deleteModelId;
- (id)dictionaryRepresentation;
- (bool)hasModelId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelId;
- (bool)readFrom:(id)arg1;
- (void)setHasModelId:(bool)arg1;
- (void)setModelId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
