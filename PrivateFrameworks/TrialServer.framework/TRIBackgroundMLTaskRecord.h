
@interface TRIBackgroundMLTaskRecord : NSObject <NSCopying> {
    NSString<TRIFactorPackSetId> * _activeFactorPackSetId;
    NSNumber * _activeTargetingRuleIndex;
    TRIClientBMLTArtifact * _artifact;
    TRIBMLTDeployment * _bmltDeployment;
    NSDate * _endDate;
    NSString * _pluginId;
    long long  _status;
    NSString<TRIFactorPackSetId> * _targetedFactorPackSetId;
    NSNumber * _targetedTargetingRuleIndex;
}

@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *activeFactorPackSetId;
@property (nonatomic, readonly) NSNumber *activeTargetingRuleIndex;
@property (nonatomic, readonly) TRIClientBMLTArtifact *artifact;
@property (nonatomic, readonly) TRIBMLTDeployment *bmltDeployment;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *pluginId;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *targetedFactorPackSetId;
@property (nonatomic, readonly) NSNumber *targetedTargetingRuleIndex;

+ (id)recordWithBmltDeployment:(id)arg1 pluginId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 endDate:(id)arg8 artifact:(id)arg9;

- (void).cxx_destruct;
- (id)activeFactorPackSetId;
- (id)activeTargetingRuleIndex;
- (id)artifact;
- (id)bmltDeployment;
- (id)copyWithReplacementActiveFactorPackSetId:(id)arg1;
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)arg1;
- (id)copyWithReplacementArtifact:(id)arg1;
- (id)copyWithReplacementBmltDeployment:(id)arg1;
- (id)copyWithReplacementEndDate:(id)arg1;
- (id)copyWithReplacementPluginId:(id)arg1;
- (id)copyWithReplacementStatus:(long long)arg1;
- (id)copyWithReplacementTargetedFactorPackSetId:(id)arg1;
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBmltDeployment:(id)arg1 pluginId:(id)arg2 activeFactorPackSetId:(id)arg3 activeTargetingRuleIndex:(id)arg4 targetedFactorPackSetId:(id)arg5 targetedTargetingRuleIndex:(id)arg6 status:(long long)arg7 endDate:(id)arg8 artifact:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (bool)isExpired;
- (id)pluginId;
- (long long)status;
- (id)targetedFactorPackSetId;
- (id)targetedTargetingRuleIndex;

@end
