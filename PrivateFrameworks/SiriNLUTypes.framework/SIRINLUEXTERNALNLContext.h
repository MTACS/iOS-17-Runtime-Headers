
@interface SIRINLUEXTERNALNLContext : PBCodable <NSCopying> {
    NSMutableArray * _activeTasks;
    NSMutableArray * _executedTasks;
    NSMutableArray * _salientEntities;
    SIRINLUEXTERNALSystemDialogActGroup * _systemDialogActGroup;
    NSMutableArray * _systemDialogActs;
}

@property (nonatomic, retain) NSMutableArray *activeTasks;
@property (nonatomic, retain) NSMutableArray *executedTasks;
@property (nonatomic, readonly) bool hasSystemDialogActGroup;
@property (nonatomic, retain) NSMutableArray *salientEntities;
@property (nonatomic, retain) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup;
@property (nonatomic, retain) NSMutableArray *systemDialogActs;

+ (Class)activeTasksType;
+ (Class)executedTasksType;
+ (Class)salientEntitiesType;
+ (Class)systemDialogActsType;

- (void).cxx_destruct;
- (id)activeTasks;
- (id)activeTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeTasksCount;
- (void)addActiveTasks:(id)arg1;
- (void)addExecutedTasks:(id)arg1;
- (void)addSalientEntities:(id)arg1;
- (void)addSystemDialogActs:(id)arg1;
- (void)clearActiveTasks;
- (void)clearExecutedTasks;
- (void)clearSalientEntities;
- (void)clearSystemDialogActs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executedTasks;
- (id)executedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)executedTasksCount;
- (bool)hasSystemDialogActGroup;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)salientEntities;
- (id)salientEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)salientEntitiesCount;
- (void)setActiveTasks:(id)arg1;
- (void)setExecutedTasks:(id)arg1;
- (void)setSalientEntities:(id)arg1;
- (void)setSystemDialogActGroup:(id)arg1;
- (void)setSystemDialogActs:(id)arg1;
- (id)systemDialogActGroup;
- (id)systemDialogActs;
- (id)systemDialogActsAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemDialogActsCount;
- (void)writeTo:(id)arg1;

@end
