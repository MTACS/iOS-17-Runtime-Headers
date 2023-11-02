
@interface easy_engageOutput : NSObject <MLFeatureProvider> {
    NSDictionary * _classProbability;
    long long  _engage;
}

@property (nonatomic, retain) NSDictionary *classProbability;
@property (nonatomic) long long engage;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)classProbability;
- (long long)engage;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithEngage:(long long)arg1 classProbability:(id)arg2;
- (void)setClassProbability:(id)arg1;
- (void)setEngage:(long long)arg1;

@end
