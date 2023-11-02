
@interface Image_Estimator_HEIFOutput : NSObject <MLFeatureProvider> {
    double  _Target_Quality_Factor;
}

@property (nonatomic) double Target_Quality_Factor;
@property (nonatomic, readonly) NSSet *featureNames;

- (double)Target_Quality_Factor;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithTarget_Quality_Factor:(double)arg1;
- (void)setTarget_Quality_Factor:(double)arg1;

@end
