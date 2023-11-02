
@interface NLXSchemaCDMSystemReportedSuccess : SISchemaInstrumentationMessage {
    bool  _hasTask;
    bool  _hasTaskId;
    USOSchemaUSOGraph * _task;
    SISchemaUUID * _taskId;
}

@property (nonatomic) bool hasTask;
@property (nonatomic) bool hasTaskId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOGraph *task;
@property (nonatomic, retain) SISchemaUUID *taskId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTask;
- (void)deleteTaskId;
- (id)dictionaryRepresentation;
- (bool)hasTask;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTask:(bool)arg1;
- (void)setHasTaskId:(bool)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)task;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
