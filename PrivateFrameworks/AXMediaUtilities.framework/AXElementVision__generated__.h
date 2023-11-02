
@interface AXElementVision__generated__ : NSObject {
    MLModel * _model;
}

@property (nonatomic, readonly) MLModel *model;

+ (id)urlOfModelInThisBundle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionFromImage:(struct __CVBuffer { }*)arg1 iouThreshold:(double)arg2 confidenceThreshold:(double)arg3 error:(id*)arg4;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
