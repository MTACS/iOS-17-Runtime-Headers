
@interface REMLPredictionSet : NSObject {
    REMLPrediction * _prediction;
    NSDictionary * _predictionsByKey;
}

@property (nonatomic, readonly) REMLPrediction *prediction;

- (void).cxx_destruct;
- (id)initWithPrediction:(id)arg1;
- (id)initWithPrediction:(id)arg1 predictionMap:(id)arg2;
- (id)prediction;
- (id)predictionForKey:(id)arg1;

@end
