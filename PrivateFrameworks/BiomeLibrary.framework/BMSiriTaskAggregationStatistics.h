
@interface BMSiriTaskAggregationStatistics : BMEventBase <BMStoreData> {
    unsigned int  _cancelledSystemTasks;
    unsigned int  _completedSystemTasks;
    unsigned int  _failedSystemTasks;
    bool  _hasCancelledSystemTasks;
    bool  _hasCompletedSystemTasks;
    bool  _hasFailedSystemTasks;
    bool  _hasTasksPerformedWithUI;
    unsigned int  _tasksPerformedWithUI;
}

@property (nonatomic, readonly) unsigned int cancelledSystemTasks;
@property (nonatomic, readonly) unsigned int completedSystemTasks;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int failedSystemTasks;
@property (nonatomic) bool hasCancelledSystemTasks;
@property (nonatomic) bool hasCompletedSystemTasks;
@property (nonatomic) bool hasFailedSystemTasks;
@property (nonatomic) bool hasTasksPerformedWithUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int tasksPerformedWithUI;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)cancelledSystemTasks;
- (unsigned int)completedSystemTasks;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)failedSystemTasks;
- (bool)hasCancelledSystemTasks;
- (bool)hasCompletedSystemTasks;
- (bool)hasFailedSystemTasks;
- (bool)hasTasksPerformedWithUI;
- (id)initByReadFrom:(id)arg1;
- (id)initWithCompletedSystemTasks:(id)arg1 failedSystemTasks:(id)arg2 cancelledSystemTasks:(id)arg3 tasksPerformedWithUI:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasCancelledSystemTasks:(bool)arg1;
- (void)setHasCompletedSystemTasks:(bool)arg1;
- (void)setHasFailedSystemTasks:(bool)arg1;
- (void)setHasTasksPerformedWithUI:(bool)arg1;
- (unsigned int)tasksPerformedWithUI;
- (void)writeTo:(id)arg1;

@end
