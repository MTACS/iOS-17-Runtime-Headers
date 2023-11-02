
@interface TRIRolloutFactorsState : TRIFactorsState {
    TRIRolloutDeployment * _deployment;
}

@property (nonatomic, readonly) TRIRolloutDeployment *deployment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToState:(id)arg1;
- (id)deployment;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDeployment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persisted;
- (id)rolloutIdentifiers;

@end
