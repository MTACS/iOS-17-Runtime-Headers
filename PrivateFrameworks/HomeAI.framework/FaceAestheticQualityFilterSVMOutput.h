
@interface FaceAestheticQualityFilterSVMOutput : NSObject <MLFeatureProvider> {
    long long  _classLabel;
    NSDictionary * _classProbability;
}

@property (nonatomic) long long classLabel;
@property (nonatomic, retain) NSDictionary *classProbability;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (long long)classLabel;
- (id)classProbability;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithClassLabel:(long long)arg1 classProbability:(id)arg2;
- (void)setClassLabel:(long long)arg1;
- (void)setClassProbability:(id)arg1;

@end
