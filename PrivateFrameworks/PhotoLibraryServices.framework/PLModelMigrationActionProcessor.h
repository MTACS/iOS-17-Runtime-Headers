
@interface PLModelMigrationActionProcessor : NSObject <NSProgressReporting> {
    PLCoreAnalyticsEventManager * _analyticsEventManager;
    bool  _ignoreProgressUpdates;
    PLTimedPerfCheck * _lifetimePerfCheck;
    double  _lifetimeToken;
    PLModelMigratorLog * _logger;
    bool  _loggerCloseRequired;
    PLPhotoLibraryPathManager * _pathManager;
    int  _pid;
    NSProgress * _progress;
    bool  _success;
    unsigned short  _tag;
    double  _token;
    long long  _type;
    NSString * _uuid;
    NSString * _uuidTruncated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreProgressUpdates;
@property (retain) PLModelMigratorLog *logger;
@property (retain) NSProgress *progress;
@property (getter=isSuccess, nonatomic) bool success;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_generateActionMarker;
- (id)_generateActionMarkerBase;
- (id)_generateActionTagMarker;
- (void)_initialLog;
- (void)_performActionWithName:(id)arg1 ifRequired:(struct { bool x1; })arg2 recordTimedCoreAnalyticsEvent:(id)arg3 coreAnalyticsEventKey:(id)arg4 block:(id /* block */)arg5;
- (id)_progressLogMessage;
- (id)_startLogEntryWithName:(id)arg1;
- (void)_stopLogEntryWithPerfCheck:(id)arg1;
- (void)dealloc;
- (bool)ignoreProgressUpdates;
- (id)initWithUUID:(id)arg1 pathManager:(id)arg2 migrationActionType:(long long)arg3 analyticsEventManager:(id)arg4 logger:(id)arg5 progressUnitCount:(unsigned long long)arg6;
- (bool)isSuccess;
- (id)logger;
- (void)performActionWithName:(id)arg1 ifRequired:(struct { bool x1; })arg2 block:(id /* block */)arg3;
- (void)performActionWithName:(id)arg1 ifRequired:(struct { bool x1; })arg2 recordTimedCoreAnalyticsEvent:(id)arg3 coreAnalyticsEventKey:(id)arg4 block:(id /* block */)arg5;
- (id)progress;
- (void)setIgnoreProgressUpdates:(bool)arg1;
- (void)setLogger:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setSuccess:(bool)arg1;

@end
