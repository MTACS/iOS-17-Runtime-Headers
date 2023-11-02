
@interface L2XGBRegressorOutput : NSObject <MLFeatureProvider> {
    double  _target;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) double target;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithTarget:(double)arg1;
- (void)setTarget:(double)arg1;
- (double)target;

@end
