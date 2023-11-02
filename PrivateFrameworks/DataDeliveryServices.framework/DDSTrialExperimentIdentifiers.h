
@interface DDSTrialExperimentIdentifiers : TRIExperimentIdentifiers <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(int)arg3;

@end
