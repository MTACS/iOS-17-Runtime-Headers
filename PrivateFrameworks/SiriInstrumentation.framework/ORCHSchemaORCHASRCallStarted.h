
@interface ORCHSchemaORCHASRCallStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int taskType : 1; 
    }  _has;
    int  _taskType;
}

@property (nonatomic) bool hasTaskType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int taskType;

- (void)deleteTaskType;
- (id)dictionaryRepresentation;
- (bool)hasTaskType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setTaskType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)taskType;
- (void)writeTo:(id)arg1;

@end
