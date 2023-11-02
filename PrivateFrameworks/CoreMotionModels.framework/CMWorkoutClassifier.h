
@interface CMWorkoutClassifier : NSObject {
    CMWorkoutClassifierCNN * _predictor;
}

- (void).cxx_destruct;
- (id)init;
- (id)predictionFromX__0:(id)arg1 error:(id*)arg2;

@end
