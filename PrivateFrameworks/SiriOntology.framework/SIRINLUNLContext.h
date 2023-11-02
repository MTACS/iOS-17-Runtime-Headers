
@interface SIRINLUNLContext : NSObject <NSSecureCoding> {
    NSArray * _activeTasks;
    NSArray * _executedTasks;
    NSArray * _salientEntities;
    NSArray * _systemDialogActs;
}

@property (nonatomic, retain) NSArray *activeTasks;
@property (nonatomic, retain) NSArray *executedTasks;
@property (nonatomic, retain) NSArray *salientEntities;
@property (nonatomic, retain) NSArray *systemDialogActs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeTasks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executedTasks;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemDialogActs:(id)arg1 activeTasks:(id)arg2 executedTasks:(id)arg3;
- (id)initWithSystemDialogActs:(id)arg1 activeTasks:(id)arg2 executedTasks:(id)arg3 salientEntities:(id)arg4;
- (id)salientEntities;
- (void)setActiveTasks:(id)arg1;
- (void)setExecutedTasks:(id)arg1;
- (void)setSalientEntities:(id)arg1;
- (void)setSystemDialogActs:(id)arg1;
- (id)systemDialogActs;

@end
