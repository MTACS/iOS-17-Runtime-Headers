
@interface NLXSchemaCDMSystemPrompted : SISchemaInstrumentationMessage {
    bool  _hasTarget;
    bool  _hasTaskId;
    USOSchemaUSOGraph * _target;
    SISchemaUUID * _taskId;
}

@property (nonatomic) bool hasTarget;
@property (nonatomic) bool hasTaskId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOGraph *target;
@property (nonatomic, retain) SISchemaUUID *taskId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTarget;
- (void)deleteTaskId;
- (id)dictionaryRepresentation;
- (bool)hasTarget;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTarget:(bool)arg1;
- (void)setHasTaskId:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)target;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
