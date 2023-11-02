
@interface ATXImmutableCandidateRelevanceModelFeaturizer : NSObject <NSSecureCoding> {
    NSArray * _featureValueNames;
}

@property (nonatomic, retain) NSArray *featureValueNames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)dimensions;
- (void)encodeWithCoder:(id)arg1;
- (id)featureValueNames;
- (id)featureVectorForContext:(id)arg1 candidate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeatureValueNames:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXImmutableCandidateRelevanceModelFeaturizer:(id)arg1;
- (void)setFeatureValueNames:(id)arg1;

@end
