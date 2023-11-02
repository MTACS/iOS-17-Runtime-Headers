
@interface TRIExperimentFactorsState : TRIFactorsState {
    TRIExperimentDeployment * _deployment;
    NSString * _treatmentId;
}

@property (nonatomic, readonly) TRIExperimentDeployment *deployment;
@property (nonatomic, readonly) NSString *treatmentId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToState:(id)arg1;
- (id)deployment;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentIdentifiers;
- (unsigned long long)hash;
- (id)initWithDeployment:(id)arg1 treatmentId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)persisted;
- (id)treatmentId;

@end
