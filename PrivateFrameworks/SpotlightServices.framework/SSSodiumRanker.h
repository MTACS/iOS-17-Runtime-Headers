
@interface SSSodiumRanker : NSObject {
    float  _estimatedMaxPommesL1Score;
    L2XGBRegressor * _l2XGBRegressor;
    PFSceneTaxonomy * _sceneTaxonomy;
    NSObject<OS_dispatch_queue> * _serial_queue;
}

@property (nonatomic) float estimatedMaxPommesL1Score;
@property (nonatomic, retain) L2XGBRegressor *l2XGBRegressor;
@property (nonatomic, retain) PFSceneTaxonomy *sceneTaxonomy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serial_queue;

+ (id)sharedSodiumRanker;

- (void).cxx_destruct;
- (long long)compare:(id)arg1 to:(id)arg2 currentTime:(double)arg3;
- (float)estimatedMaxPommesL1Score;
- (double)l2XGBModelScoreForInput:(id)arg1 error:(id*)arg2;
- (id)l2XGBRegressor;
- (long long)mailCompare:(id)arg1 to:(id)arg2 currentTime:(double)arg3;
- (long long)photosCompare:(id)arg1 to:(id)arg2 currentTime:(double)arg3;
- (id)sceneTaxonomy;
- (id)serial_queue;
- (void)setEstimatedMaxPommesL1Score:(float)arg1;
- (void)setL2XGBRegressor:(id)arg1;
- (void)setSceneTaxonomy:(id)arg1;
- (void)setSerial_queue:(id)arg1;
- (void)sortAndFilterRankedItems:(id)arg1 maxCount:(long long)arg2 bundleID:(id)arg3 userQuery:(id)arg4 queryID:(long long)arg5 currentTime:(double)arg6;
- (void)updateScoresForItems:(id)arg1 withSectionBundle:(id)arg2 userQuery:(id)arg3 currentTime:(double)arg4 collectL2Signals:(bool)arg5 keyboardLanguage:(id)arg6;

@end
