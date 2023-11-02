
@interface NLXSchemaCDMSystemInformed : SISchemaInstrumentationMessage {
    NSArray * _entities;
    bool  _hasTaskId;
    SISchemaUUID * _taskId;
}

@property (nonatomic, copy) NSArray *entities;
@property (nonatomic) bool hasTaskId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *taskId;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearEntities;
- (void)deleteEntities;
- (void)deleteTaskId;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setHasTaskId:(bool)arg1;
- (void)setTaskId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
