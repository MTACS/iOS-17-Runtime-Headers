
@interface DRConfigMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    DRConfig * _currentConfig;
    id /* block */  _processingBlock;
    NSObject<OS_dispatch_queue> * _targetQueue;
    NSString * _teamID;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) DRConfig *currentConfig;
@property (nonatomic, readonly) id /* block */ processingBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) NSString *teamID;

- (void).cxx_destruct;
- (void)_handleCurrentConfig:(id)arg1 error:(id)arg2 forceBroadcast:(bool)arg3;
- (bool)_markConfigUUID:(id)arg1 isRejected:(bool)arg2 errorOut:(id*)arg3;
- (void)_notifyClientOfConfig:(id)arg1 error:(id)arg2;
- (id)accessQueue;
- (id)currentConfig;
- (id)currentConfigSnapshotWithErrorOut:(id*)arg1;
- (void)dealloc;
- (id)initWithTeamID:(id)arg1 targetQueue:(id)arg2 configProcessingBlock:(id /* block */)arg3;
- (bool)markCompletedConfigUUID:(id)arg1 errorOut:(id*)arg2;
- (id /* block */)processingBlock;
- (bool)rejectConfigUUID:(id)arg1 errorOut:(id*)arg2;
- (void)setCurrentConfig:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)targetQueue;
- (id)teamID;

@end
