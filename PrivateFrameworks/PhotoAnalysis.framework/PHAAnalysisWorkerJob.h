
@interface PHAAnalysisWorkerJob : PHAWorkerJob {
    bool  _canUseNetwork;
    bool  _persistsAnalysisState;
}

@property (nonatomic, readonly) bool canUseNetwork;
@property (nonatomic) bool persistsAnalysisState;

- (bool)canUseNetwork;
- (id)description;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 canUseNetwork:(bool)arg3 library:(id)arg4;
- (bool)persistsAnalysisState;
- (void)setPersistsAnalysisState:(bool)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;

@end
