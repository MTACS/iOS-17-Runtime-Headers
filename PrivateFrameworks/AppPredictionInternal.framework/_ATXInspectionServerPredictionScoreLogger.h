
@interface _ATXInspectionServerPredictionScoreLogger : NSObject <ATXPredictionScoreLogger> {
    NSMutableDictionary * _inputsAndSubscores;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _stageScores;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)inputsAndSubscores;
- (void)logInputDict:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)logStageScores:(id)arg1 forStageType:(long long)arg2;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setCacheAge:(double)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setPredictionClass:(id)arg1;
- (id)stageScores;

@end
