
@interface PHAWorkerHealthMonitor : NSObject {
    NSMutableDictionary * _cachedAverageScoresByWorkerType;
    NSMutableDictionary * _lastTrimDateByWorkerType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _maxScoreRecentnessInterval;
    NSMutableDictionary * _scoresByWorkerType;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedAverageScoresByWorkerType;
@property (nonatomic, readonly) NSMutableDictionary *lastTrimDateByWorkerType;
@property (nonatomic) double maxScoreRecentnessInterval;
@property (nonatomic, readonly) NSMutableDictionary *scoresByWorkerType;

- (void).cxx_destruct;
- (float)_averageScoreForWorkerType:(short)arg1;
- (float)_calculateAverageScoreForWorkerType:(short)arg1;
- (bool)_isHealthyForWorkerType:(short)arg1;
- (bool)_needsTrimScoresForWorkerType:(short)arg1;
- (id)_scoresForWorkerType:(short)arg1;
- (void)_trimScoresForWorkerType:(short)arg1;
- (float)averageScoreForWorkerType:(short)arg1;
- (id)cachedAverageScoresByWorkerType;
- (id)init;
- (bool)isHealthyForWorkerType:(short)arg1;
- (id)lastTrimDateByWorkerType;
- (double)maxScoreRecentnessInterval;
- (void)recordResultsFromWorkerJob:(id)arg1;
- (void)reset;
- (id)scoresByWorkerType;
- (void)setMaxScoreRecentnessInterval:(double)arg1;
- (id)statusAsDictionary;

@end
