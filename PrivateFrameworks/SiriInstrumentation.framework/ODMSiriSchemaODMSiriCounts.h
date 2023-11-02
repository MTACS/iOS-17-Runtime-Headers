
@interface ODMSiriSchemaODMSiriCounts : SISchemaInstrumentationMessage {
    ODMSiriSchemaODMDynamicDimensions * _dimensions;
    bool  _hasDimensions;
    bool  _hasTaskCounts;
    ODMSiriSchemaODMSiriTaskCounts * _taskCounts;
}

@property (nonatomic, retain) ODMSiriSchemaODMDynamicDimensions *dimensions;
@property (nonatomic) bool hasDimensions;
@property (nonatomic) bool hasTaskCounts;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ODMSiriSchemaODMSiriTaskCounts *taskCounts;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDimensions;
- (void)deleteTaskCounts;
- (id)dictionaryRepresentation;
- (id)dimensions;
- (bool)hasDimensions;
- (bool)hasTaskCounts;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDimensions:(id)arg1;
- (void)setHasDimensions:(bool)arg1;
- (void)setHasTaskCounts:(bool)arg1;
- (void)setTaskCounts:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)taskCounts;
- (void)writeTo:(id)arg1;

@end
