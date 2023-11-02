
@interface ATXPredictionJSONScoreLogger : NSObject <ATXPredictionScoreLogger> {
    unsigned char  _consumerSubType;
    NSObject<OS_dispatch_queue> * _fastQueue;
    NSMutableDictionary * _history;
    NSObject<OS_dispatch_queue> * _slowQueue;
    NSMutableArray * _subscoreHistories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)flush;
- (void)flushWithCompletion:(id /* block */)arg1;
- (void)flushWithCompletion:(id /* block */)arg1 filenameSuffix:(id)arg2;
- (void)flushWithFilenameSuffix:(id)arg1;
- (id)init;
- (void)logInputDict:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
- (void)logStageScores:(id)arg1 forStageType:(long long)arg2;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setCacheAge:(double)arg1;
- (void)setConsumerSubType:(unsigned char)arg1;
- (void)setPredictionClass:(id)arg1;

@end
