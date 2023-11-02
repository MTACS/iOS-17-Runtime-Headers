
@interface CMWorkoutClassifierCNN : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromX__0:(id)arg1 error:(id*)arg2;

@end
