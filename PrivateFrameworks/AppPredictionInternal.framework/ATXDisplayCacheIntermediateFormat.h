
@interface ATXDisplayCacheIntermediateFormat : NSObject {
    NSArray * _actions;
    NSIndexSet * _lockscreenPredictionIndices;
    NSArray * _predictionChunks;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSIndexSet *lockscreenPredictionIndices;
@property (nonatomic, readonly) NSArray *predictionChunks;

+ (id)fromActions:(id)arg1;

- (void).cxx_destruct;
- (id)actions;
- (id)lockscreenPredictionIndices;
- (id)predictionChunks;

@end
