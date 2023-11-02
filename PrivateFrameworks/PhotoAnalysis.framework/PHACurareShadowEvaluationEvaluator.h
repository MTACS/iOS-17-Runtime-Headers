
@interface PHACurareShadowEvaluationEvaluator : NSObject {
    NSString * _labelName;
    ETLossDefinition * _lossDefinition;
    NSString * _lossName;
    NSString * _modelInputName;
    NSString * _modelOutputName;
    ETOptimizerDefinition * _optimizerDefinition;
}

@property (nonatomic, retain) NSString *labelName;
@property (nonatomic, retain) ETLossDefinition *lossDefinition;
@property (nonatomic, retain) NSString *lossName;
@property (nonatomic, retain) NSString *modelInputName;
@property (nonatomic, retain) NSString *modelOutputName;
@property (nonatomic, retain) ETOptimizerDefinition *optimizerDefinition;

+ (id)evaluatorLog;

- (void).cxx_destruct;
- (int)accuracyForProbability:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 isPositiveData:(bool)arg2 atIndex:(int)arg3 andOperatingPoint:(float)arg4;
- (id)evaluateModelAtPath:(id)arg1 labelIndex:(int)arg2 labelOperatingPoint:(float)arg3 isPositiveData:(bool)arg4 evaluationData:(id)arg5 error:(id*)arg6;
- (id)evaluateModelAtPath:(id)arg1 labelIndex:(int)arg2 labelOperatingPoint:(float)arg3 positiveEvaluationData:(id)arg4 negativeEvaluationData:(id)arg5 error:(id*)arg6;
- (id)getDefaultEvaluationResultForModelPath:(id)arg1 isPositiveData:(bool)arg2;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })getEspressoBufferShapeWithBuffer:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1;
- (id)initWithModelInputName:(id)arg1 modelOutputName:(id)arg2 lossName:(id)arg3;
- (id)labelName;
- (id)lossDefinition;
- (id)lossName;
- (id)modelInputName;
- (id)modelOutputName;
- (id)optimizerDefinition;
- (void)setLabelName:(id)arg1;
- (void)setLossDefinition:(id)arg1;
- (void)setLossName:(id)arg1;
- (void)setModelInputName:(id)arg1;
- (void)setModelOutputName:(id)arg1;
- (void)setOptimizerDefinition:(id)arg1;

@end
