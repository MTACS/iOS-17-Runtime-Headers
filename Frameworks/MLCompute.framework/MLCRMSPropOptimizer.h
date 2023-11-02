
@interface MLCRMSPropOptimizer : MLCOptimizer <MLCOptimizerCompiling, NSCopying> {
    float  _alpha;
    float  _epsilon;
    bool  _isCentered;
    float  _momentumScale;
    MLCOptimizerDescriptor * _optimizerDescriptor;
}

@property (nonatomic, readonly) float alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCentered;
@property (nonatomic, readonly) float momentumScale;
@property (nonatomic, readonly) MLCOptimizerDescriptor *optimizerDescriptor;
@property (readonly) Class superclass;

+ (id)optimizerWithDescriptor:(id)arg1;
+ (id)optimizerWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 isCentered:(bool)arg5;

- (void).cxx_destruct;
- (float)alpha;
- (bool)compileForDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)epsilon;
- (id)initWithDescriptor:(id)arg1 momentumScale:(float)arg2 alpha:(float)arg3 epsilon:(float)arg4 centered:(bool)arg5;
- (bool)isCentered;
- (float)momentumScale;
- (id)optimizerDescriptor;

@end
