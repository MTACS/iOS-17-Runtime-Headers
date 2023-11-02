
@interface MLCAdamWOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {
    float  _beta1;
    float  _beta2;
    float  _epsilon;
    MLCOptimizerDescriptor * _optimizerDescriptor;
    unsigned long long  _timeStep;
    bool  _usesAMSGrad;
}

@property (nonatomic, readonly) float beta1;
@property (nonatomic, readonly) float beta2;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLCOptimizerDescriptor *optimizerDescriptor;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timeStep;
@property (nonatomic, readonly) bool usesAMSGrad;

+ (id)optimizerWithDescriptor:(id)arg1;
+ (id)optimizerWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 usesAMSGrad:(bool)arg5 timeStep:(unsigned long long)arg6;

- (void).cxx_destruct;
- (float)beta1;
- (float)beta2;
- (bool)compileForDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)epsilon;
- (id)initWithDescriptor:(id)arg1 beta1:(float)arg2 beta2:(float)arg3 epsilon:(float)arg4 usesAMSGrad:(bool)arg5 timeStep:(unsigned long long)arg6;
- (id)optimizerDescriptor;
- (void)setTimeStep:(unsigned long long)arg1;
- (unsigned long long)timeStep;
- (bool)usesAMSGrad;

@end
