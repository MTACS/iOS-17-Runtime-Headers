
@interface NLXSchemaCDMTask : SISchemaInstrumentationMessage {
    struct { 
        unsigned int score : 1; 
    }  _has;
    bool  _hasTask;
    bool  _hasTaskId;
    double  _score;
    USOSchemaUSOGraph * _task;
    SISchemaUUID * _taskId;
}

@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasTask;
@property (nonatomic) bool hasTaskId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double score;
@property (nonatomic, retain) USOSchemaUSOGraph *task;
@property (nonatomic, retain) SISchemaUUID *taskId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteScore;
- (void)deleteTask;
- (void)deleteTaskId;
- (id)dictionaryRepresentation;
- (bool)hasScore;
- (bool)hasTask;
- (bool)hasTaskId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasScore:(bool)arg1;
- (void)setHasTask:(bool)arg1;
- (void)setHasTaskId:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)task;
- (id)taskId;
- (void)writeTo:(id)arg1;

@end
