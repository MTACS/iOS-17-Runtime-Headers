
@interface BMLighthouseDeviceTelemetry : BMEventBase <BMStoreData> {
    bool  _hasRaw_bucketEnd;
    bool  _hasRaw_bucketStart;
    bool  _hasTasksCompleted;
    bool  _hasTasksCount;
    bool  _hasTasksDeferred;
    bool  _hasTasksFailed;
    bool  _hasTasksRun;
    bool  _hasVersion;
    double  _raw_bucketEnd;
    double  _raw_bucketStart;
    int  _tasksCompleted;
    int  _tasksCount;
    int  _tasksDeferred;
    int  _tasksFailed;
    int  _tasksRun;
    int  _version;
}

@property (nonatomic, readonly) NSDate *bucketEnd;
@property (nonatomic, readonly) NSDate *bucketStart;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTasksCompleted;
@property (nonatomic) bool hasTasksCount;
@property (nonatomic) bool hasTasksDeferred;
@property (nonatomic) bool hasTasksFailed;
@property (nonatomic) bool hasTasksRun;
@property (nonatomic) bool hasVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int tasksCompleted;
@property (nonatomic, readonly) int tasksCount;
@property (nonatomic, readonly) int tasksDeferred;
@property (nonatomic, readonly) int tasksFailed;
@property (nonatomic, readonly) int tasksRun;
@property (nonatomic, readonly) int version;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (id)bucketEnd;
- (id)bucketStart;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasTasksCompleted;
- (bool)hasTasksCount;
- (bool)hasTasksDeferred;
- (bool)hasTasksFailed;
- (bool)hasTasksRun;
- (bool)hasVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithVersion:(id)arg1 bucketStart:(id)arg2 bucketEnd:(id)arg3 tasksCount:(id)arg4 tasksRun:(id)arg5 tasksDeferred:(id)arg6 tasksFailed:(id)arg7 tasksCompleted:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasTasksCompleted:(bool)arg1;
- (void)setHasTasksCount:(bool)arg1;
- (void)setHasTasksDeferred:(bool)arg1;
- (void)setHasTasksFailed:(bool)arg1;
- (void)setHasTasksRun:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (int)tasksCompleted;
- (int)tasksCount;
- (int)tasksDeferred;
- (int)tasksFailed;
- (int)tasksRun;
- (int)version;
- (void)writeTo:(id)arg1;

@end
