
@interface CIPredictionModel : NSObject <MLFeatureProvider> {
    struct CIPredictionModelImageFeatures { 
        NSString *name; 
        long long width; 
        long long height; 
        unsigned int format; 
    }  _inputImageFeatures;
    MLModel * _model;
    struct CIPredictionModelImageFeatures { 
        NSString *name; 
        long long width; 
        long long height; 
        unsigned int format; 
    }  _outputImageFeatures;
    struct __CVBuffer { } * imageBuffer;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) struct CIPredictionModelImageFeatures { id x1; long long x2; long long x3; unsigned int x4; } inputImageFeatures;
@property (nonatomic, retain) MLModel *model;
@property (nonatomic) struct CIPredictionModelImageFeatures { id x1; long long x2; long long x3; unsigned int x4; } outputImageFeatures;

- (void)dealloc;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithModel:(id)arg1;
- (struct CIPredictionModelImageFeatures { id x1; long long x2; long long x3; unsigned int x4; })inputImageFeatures;
- (id)model;
- (struct CIPredictionModelImageFeatures { id x1; long long x2; long long x3; unsigned int x4; })outputImageFeatures;
- (struct __CVBuffer { }*)predictUsingInputBuffer:(struct __CVBuffer { }*)arg1 outputBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (bool)processInputFeatureWithName:(id)arg1 featureDescription:(id)arg2;
- (bool)processInputModel:(id)arg1;
- (bool)processOutputFeatureWithName:(id)arg1 featureDescription:(id)arg2;
- (void)setInputImageFeatures:(struct CIPredictionModelImageFeatures { id x1; long long x2; long long x3; unsigned int x4; })arg1;
- (void)setModel:(id)arg1;
- (void)setOutputImageFeatures:(struct CIPredictionModelImageFeatures { id x1; long long x2; long long x3; unsigned int x4; })arg1;

@end
