
@interface CHStrokeClassificationModel : CHRecurrentNeuralNetwork {
    NSMutableDictionary * _codeIndexDictionary;
    struct CHCodeMap { char *x1; unsigned long long x2; unsigned int *x3; unsigned int x4; } * _codeMap;
    long long  _contextMaxStrokes;
    long long  _cosAngleFeatureIndex;
    long long  _distanceFeatureIndex;
    long long  _inferenceCount;
    double  _interpointDistance;
    long long  _maxInputWidth;
    long long  _maxNumberOfInputStrokes;
    long long  _maxPointsPerStroke;
    long long  _minPointsPerStroke;
    void * _model;
    NSArray * _modelConfigurationsNumPoints;
    NSArray * _modelConfigurationsNumStrokes;
    long long  _modelDecoderSize;
    NSString * _modelSmallestConfig;
    long long  _modelUseCount;
    long long  _nontextClassIndex;
    long long  _numInputFeatures;
    long long  _numOutputClasses;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _recognitionMaxStrokes;
    long long  _sinAngleFeatureIndex;
    NSIndexSet * _textLTRClassIndexes;
    NSIndexSet * _textRTLClassIndexes;
}

@property (nonatomic, readonly) NSMutableDictionary *codeIndexDictionary;
@property (nonatomic, readonly) struct CHCodeMap { char *x1; unsigned long long x2; unsigned int *x3; unsigned int x4; }*codeMap;
@property (nonatomic, readonly) long long contextMaxStrokes;
@property (nonatomic, readonly) long long cosAngleFeatureIndex;
@property (nonatomic, readonly) long long distanceFeatureIndex;
@property (nonatomic, readonly) double interpointDistance;
@property (nonatomic, readonly) long long maxInputWidth;
@property (nonatomic, readonly) long long maxNumberOfInputStrokes;
@property (nonatomic, readonly) long long maxPointsPerStroke;
@property (nonatomic, readonly) long long minPointsPerStroke;
@property (nonatomic, readonly) NSArray *modelConfigurationsNumPoints;
@property (nonatomic, readonly) NSArray *modelConfigurationsNumStrokes;
@property (nonatomic, readonly) long long modelDecoderSize;
@property (nonatomic, readonly) NSString *modelSmallestConfig;
@property (nonatomic, readonly) long long nontextClassIndex;
@property (nonatomic, readonly) long long numInputFeatures;
@property (nonatomic, readonly) long long numOutputClasses;
@property (nonatomic, readonly) long long recognitionMaxStrokes;
@property (nonatomic, readonly) long long sinAngleFeatureIndex;
@property (nonatomic, readonly) NSIndexSet *textLTRClassIndexes;
@property (nonatomic, readonly) NSIndexSet *textRTLClassIndexes;

+ (id)localesFromModelPrediction:(struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *x1; void *x2; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *x_3_1_1; } x3; })arg1 maxNumberOfLocales:(long long)arg2 numberOfOutputClass:(long long)arg3 codePointDictionary:(id)arg4;
+ (id)modelWithModelName:(id)arg1;

- (void).cxx_destruct;
- (id)_extractFeaturesFromDrawing:(id)arg1 numStrokes:(unsigned long long)arg2 numPoints:(unsigned long long)arg3 error:(id*)arg4;
- (bool)_isContentStroke:(long long)arg1 withinSubtile:(long long)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 ofTotal:(long long)arg4;
- (id)_subTilesForStrokeCount:(long long)arg1;
- (bool)classifyStrokes:(id)arg1 outStrokeClassProbabilities:(void*)arg2 cancellationBlock:(id /* block */)arg3;
- (bool)classifyStrokes:(id)arg1 outTextStrokeProbabilities:(void*)arg2 cancellationBlock:(id /* block */)arg3;
- (id)codeIndexDictionary;
- (struct CHCodeMap { char *x1; unsigned long long x2; unsigned int *x3; unsigned int x4; }*)codeMap;
- (long long)contextMaxStrokes;
- (long long)cosAngleFeatureIndex;
- (void)dealloc;
- (long long)distanceFeatureIndex;
- (double)interpointDistance;
- (long long)maxInputWidth;
- (long long)maxNumberOfInputStrokes;
- (long long)maxPointsPerStroke;
- (long long)minPointsPerStroke;
- (id)modelConfigurationsNumPoints;
- (id)modelConfigurationsNumStrokes;
- (long long)modelDecoderSize;
- (id)modelSmallestConfig;
- (long long)nontextClassIndex;
- (long long)numInputFeatures;
- (long long)numOutputClasses;
- (id)predictedScriptsForDrawing:(id)arg1 maxNumberOfLocales:(long long)arg2;
- (long long)recognitionMaxStrokes;
- (long long)sinAngleFeatureIndex;
- (id)textLTRClassIndexes;
- (id)textRTLClassIndexes;

@end
