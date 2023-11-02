
@interface FaceAestheticQualityFilterSVMDataScalerOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _transformed_features;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *transformed_features;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithTransformed_features:(id)arg1;
- (void)setTransformed_features:(id)arg1;
- (id)transformed_features;

@end
