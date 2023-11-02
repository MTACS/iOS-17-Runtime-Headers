
@interface MLCSGDOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {
    float  _momentumScale;
    MLCOptimizerDescriptor * _optimizerDescriptor;
    bool  _usesNesterovMomentum;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float momentumScale;
@property (nonatomic, readonly) MLCOptimizerDescriptor *optimizerDescriptor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesNesterovMomentum;

+ (id)optimizerWithDescriptor:(id)arg1;
+ (id)optimizerWithDescriptor:(id)arg1 momentumScale:(float)arg2 usesNesterovMomentum:(bool)arg3;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithMomentumScale:(float)arg1 useNesterovMomentum:(bool)arg2 optimizerDescriptor:(id)arg3;
- (float)momentumScale;
- (id)optimizerDescriptor;
- (bool)usesNesterovMomentum;

@end
