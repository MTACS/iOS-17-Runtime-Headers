
@interface SIRINLUTurnInput : NSObject <NSSecureCoding> {
    NSArray * _activeTasks;
    NSArray * _asrOutputs;
    NSArray * _executedTasks;
    NSString * _locale;
    NSArray * _salientEntities;
    unsigned long long  _startTimestamp;
    NSArray * _systemDialogActs;
    bool  _tapToEdit;
    SIRINLUTurnContext * _turnContext;
}

@property (nonatomic, retain) NSArray *activeTasks;
@property (nonatomic, retain) NSArray *asrOutputs;
@property (nonatomic, retain) NSArray *executedTasks;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSArray *salientEntities;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic, retain) NSArray *systemDialogActs;
@property (nonatomic) bool tapToEdit;
@property (nonatomic, retain) SIRINLUTurnContext *turnContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeTasks;
- (id)asrOutputs;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executedTasks;
- (id)initWithAsrOutputs:(id)arg1 salientEntities:(id)arg2 turnContext:(id)arg3;
- (id)initWithAsrOutputs:(id)arg1 salientEntities:(id)arg2 turnContext:(id)arg3 locale:(id)arg4 tapToEdit:(bool)arg5 startTimestamp:(unsigned long long)arg6;
- (id)initWithAsrOutputs:(id)arg1 systemDialogActs:(id)arg2 activeTasks:(id)arg3 executedTasks:(id)arg4 salientEntities:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)locale;
- (id)salientEntities;
- (void)setActiveTasks:(id)arg1;
- (void)setAsrOutputs:(id)arg1;
- (void)setExecutedTasks:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSalientEntities:(id)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setSystemDialogActs:(id)arg1;
- (void)setTapToEdit:(bool)arg1;
- (void)setTurnContext:(id)arg1;
- (unsigned long long)startTimestamp;
- (id)systemDialogActs;
- (bool)tapToEdit;
- (id)turnContext;

@end
