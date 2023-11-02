
@interface ATXPredictionSetReader : NSObject {
    NSData * _data;
    const char * _perPredictionDataStart;
    Class  _predictedItemClass;
    int  _predictionCount;
}

+ (id)actionReader:(id)arg1;
+ (id)bundleIdReader:(id)arg1;

- (void).cxx_destruct;
- (id)_scoredPredictionFromData:(id)arg1 score:(float)arg2;
- (id)init;
- (id)initWithData:(id)arg1 predictedItemClass:(Class)arg2;
- (id)readScoredPredictionsWithLimit:(int)arg1;
- (id)readScoredPredictionsWithLimit:(int)arg1 filterPredicate:(id)arg2;

@end
