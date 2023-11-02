
@interface long_durationOutput : NSObject <MLFeatureProvider> {
    double  _duration_pred;
}

@property (nonatomic) double duration_pred;
@property (nonatomic, readonly) NSSet *featureNames;

- (double)duration_pred;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithDuration_pred:(double)arg1;
- (void)setDuration_pred:(double)arg1;

@end
