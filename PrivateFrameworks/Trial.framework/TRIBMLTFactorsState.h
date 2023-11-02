
@interface TRIBMLTFactorsState : TRIFactorsState {
    TRIBMLTDeployment * _deployment;
}

@property (nonatomic, readonly) TRIBMLTDeployment *deployment;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToState:(id)arg1;
- (id)bmltIdentifiers;
- (id)deployment;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDeployment:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persisted;

@end
