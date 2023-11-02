
@interface SIRINLUEXTERNALTurnInput : PBCodable <NSCopying> {
    NSMutableArray * _activeTasks;
    NSMutableArray * _asrOutputs;
    NSMutableArray * _executedTasks;
    struct { 
        unsigned int startTimestamp : 1; 
        unsigned int tapToEdit : 1; 
    }  _has;
    NSString * _locale;
    NSMutableArray * _salientEntities;
    unsigned long long  _startTimestamp;
    SIRINLUEXTERNALSystemDialogActGroup * _systemDialogActGroup;
    bool  _tapToEdit;
    SIRINLUEXTERNALTurnContext * _turnContext;
}

@property (nonatomic, retain) NSMutableArray *activeTasks;
@property (nonatomic, retain) NSMutableArray *asrOutputs;
@property (nonatomic, retain) NSMutableArray *executedTasks;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic, readonly) bool hasSystemDialogActGroup;
@property (nonatomic) bool hasTapToEdit;
@property (nonatomic, readonly) bool hasTurnContext;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSMutableArray *salientEntities;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic, retain) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup;
@property (nonatomic) bool tapToEdit;
@property (nonatomic, retain) SIRINLUEXTERNALTurnContext *turnContext;

+ (Class)activeTasksType;
+ (Class)asrOutputsType;
+ (Class)executedTasksType;
+ (Class)salientEntitiesType;

- (void).cxx_destruct;
- (id)activeTasks;
- (id)activeTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeTasksCount;
- (void)addActiveTasks:(id)arg1;
- (void)addAsrOutputs:(id)arg1;
- (void)addExecutedTasks:(id)arg1;
- (void)addSalientEntities:(id)arg1;
- (id)asrOutputs;
- (id)asrOutputsAtIndex:(unsigned long long)arg1;
- (unsigned long long)asrOutputsCount;
- (void)clearActiveTasks;
- (void)clearAsrOutputs;
- (void)clearExecutedTasks;
- (void)clearSalientEntities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)executedTasks;
- (id)executedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)executedTasksCount;
- (bool)hasLocale;
- (bool)hasStartTimestamp;
- (bool)hasSystemDialogActGroup;
- (bool)hasTapToEdit;
- (bool)hasTurnContext;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)salientEntities;
- (id)salientEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)salientEntitiesCount;
- (void)setActiveTasks:(id)arg1;
- (void)setAsrOutputs:(id)arg1;
- (void)setExecutedTasks:(id)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setHasTapToEdit:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setSalientEntities:(id)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setSystemDialogActGroup:(id)arg1;
- (void)setTapToEdit:(bool)arg1;
- (void)setTurnContext:(id)arg1;
- (unsigned long long)startTimestamp;
- (id)systemDialogActGroup;
- (bool)tapToEdit;
- (id)turnContext;
- (void)writeTo:(id)arg1;

@end
