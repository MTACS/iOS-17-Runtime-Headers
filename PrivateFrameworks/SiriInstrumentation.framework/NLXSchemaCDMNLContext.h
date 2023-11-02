
@interface NLXSchemaCDMNLContext : SISchemaInstrumentationMessage {
    NSArray * _activeTasks;
    NSArray * _executedTasks;
    NSArray * _salientEntities;
    NSArray * _systemDialogActs;
}

@property (nonatomic, copy) NSArray *activeTasks;
@property (nonatomic, copy) NSArray *executedTasks;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *salientEntities;
@property (nonatomic, copy) NSArray *systemDialogActs;

- (void).cxx_destruct;
- (id)activeTasks;
- (id)activeTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeTasksCount;
- (void)addActiveTasks:(id)arg1;
- (void)addExecutedTasks:(id)arg1;
- (void)addSalientEntities:(id)arg1;
- (void)addSystemDialogActs:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActiveTasks;
- (void)clearExecutedTasks;
- (void)clearSalientEntities;
- (void)clearSystemDialogActs;
- (void)deleteActiveTasks;
- (void)deleteExecutedTasks;
- (void)deleteSalientEntities;
- (void)deleteSystemDialogActs;
- (id)dictionaryRepresentation;
- (id)executedTasks;
- (id)executedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)executedTasksCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)salientEntities;
- (id)salientEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)salientEntitiesCount;
- (void)setActiveTasks:(id)arg1;
- (void)setExecutedTasks:(id)arg1;
- (void)setSalientEntities:(id)arg1;
- (void)setSystemDialogActs:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)systemDialogActs;
- (id)systemDialogActsAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemDialogActsCount;
- (void)writeTo:(id)arg1;

@end
