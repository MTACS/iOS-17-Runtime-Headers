
@interface ATXAppPredictionFeedbackItem : NSObject {
    NSString * _bundleId;
    float  _scoreInputs;
    float  _totalScore;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) const float*scoreInputs;
@property (nonatomic, readonly) float totalScore;

+ (id)feedbackItemsForCacheFileData:(id)arg1;
+ (id)feedbackItemsForChunks:(id)arg1;
+ (id)feedbackItemsForFeedbackChunk:(id)arg1;
+ (id)feedbackItemsForResponse:(id)arg1;
+ (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x_3_1_1; } x3; })predictionItemsForFeedbackChunk:(id)arg1;
+ (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x_3_1_1; } x3; })predictionItemsInFeedbackChunkFromCacheChunks:(id)arg1;
+ (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x_3_1_1; } x3; })predictionItemsInFeedbackChunkFromCacheFileData:(id)arg1;

- (void).cxx_destruct;
- (id)bundleId;
- (id)description;
- (id)init;
- (id)initWithBundleId:(id)arg1 totalScore:(float)arg2 scoreInputs:(const float*)arg3;
- (const float*)scoreInputs;
- (float)totalScore;

@end
