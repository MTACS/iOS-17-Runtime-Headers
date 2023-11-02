
@interface TRIRolloutRecord : NSObject <NSCopying> {
    NSString<TRIFactorPackSetId> * _activeFactorPackSetId;
    NSNumber * _activeTargetingRuleIndex;
    TRIClientRolloutArtifact * _artifact;
    TRIRolloutDeployment * _deployment;
    bool  _isShadow;
    NSArray * _namespaces;
    NSString<TRIRampId> * _rampId;
    long long  _status;
    NSString<TRIFactorPackSetId> * _targetedFactorPackSetId;
    NSNumber * _targetedTargetingRuleIndex;
}

@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *activeFactorPackSetId;
@property (nonatomic, readonly) NSNumber *activeTargetingRuleIndex;
@property (nonatomic, readonly) TRIClientRolloutArtifact *artifact;
@property (nonatomic, readonly) TRIRolloutDeployment *deployment;
@property (nonatomic, readonly) bool isShadow;
@property (nonatomic, readonly) NSArray *namespaces;
@property (nonatomic, readonly) NSString<TRIRampId> *rampId;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *targetedFactorPackSetId;
@property (nonatomic, readonly) NSNumber *targetedTargetingRuleIndex;

+ (id)recordWithDeployment:(id)arg1 rampId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 namespaces:(id)arg8 isShadow:(bool)arg9 artifact:(id)arg10;

- (void).cxx_destruct;
- (id)activeFactorPackSetId;
- (id)activeTargetingRuleIndex;
- (id)artifact;
- (id)copyWithReplacementActiveFactorPackSetId:(id)arg1;
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)arg1;
- (id)copyWithReplacementArtifact:(id)arg1;
- (id)copyWithReplacementDeployment:(id)arg1;
- (id)copyWithReplacementIsShadow:(bool)arg1;
- (id)copyWithReplacementNamespaces:(id)arg1;
- (id)copyWithReplacementRampId:(id)arg1;
- (id)copyWithReplacementStatus:(long long)arg1;
- (id)copyWithReplacementTargetedFactorPackSetId:(id)arg1;
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deployment;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDeployment:(id)arg1 rampId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 namespaces:(id)arg8 isShadow:(bool)arg9 artifact:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (bool)isShadow;
- (id)namespaces;
- (id)rampId;
- (long long)status;
- (id)targetedFactorPackSetId;
- (id)targetedTargetingRuleIndex;

@end
