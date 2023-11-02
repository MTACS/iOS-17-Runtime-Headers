
@interface TRIContentDescriptorUnion : NSObject <NSCopying> {
    TRIBMLTDeployment * _bmlt;
    TRIExperimentDeployment * _experiment;
    NSString<TRIFactorPackSetId> * _factorPackSet;
    TRIRolloutDeployment * _rollout;
    TRITreatmentContentDescriptor * _treatment;
    unsigned char  _type;
}

@property (nonatomic, readonly) TRIBMLTDeployment *bmlt;
@property (nonatomic, readonly) TRIExperimentDeployment *experiment;
@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *factorPackSet;
@property (nonatomic, readonly) TRIRolloutDeployment *rollout;
@property (nonatomic, readonly) TRITreatmentContentDescriptor *treatment;
@property (nonatomic, readonly) unsigned char type;

+ (id)unionWithType:(unsigned char)arg1 experiment:(id)arg2 treatment:(id)arg3 rollout:(id)arg4 factorPackSet:(id)arg5 bmlt:(id)arg6;

- (void).cxx_destruct;
- (id)bmlt;
- (id)copyWithReplacementBmlt:(id)arg1;
- (id)copyWithReplacementExperiment:(id)arg1;
- (id)copyWithReplacementFactorPackSet:(id)arg1;
- (id)copyWithReplacementRollout:(id)arg1;
- (id)copyWithReplacementTreatment:(id)arg1;
- (id)copyWithReplacementType:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)experiment;
- (id)factorPackSet;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned char)arg1 experiment:(id)arg2 treatment:(id)arg3 rollout:(id)arg4 factorPackSet:(id)arg5 bmlt:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUnion:(id)arg1;
- (id)rollout;
- (id)treatment;
- (unsigned char)type;

@end
