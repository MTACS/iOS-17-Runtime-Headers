
@interface TRIExperimentRecord : NSObject <NSCopying> {
    TRIClientExperimentArtifact * _artifact;
    int  _deploymentEnvironment;
    NSDate * _endDate;
    TRIExperimentDeployment * _experimentDeployment;
    bool  _isManuallyTargeted;
    bool  _isShadow;
    NSArray * _namespaces;
    NSDate * _startDate;
    long long  _status;
    NSString * _treatmentId;
    int  _type;
}

@property (nonatomic, readonly) TRIClientExperimentArtifact *artifact;
@property (nonatomic, readonly) int deploymentEnvironment;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) TRIExperimentDeployment *experimentDeployment;
@property (nonatomic, readonly) bool isManuallyTargeted;
@property (nonatomic, readonly) bool isShadow;
@property (nonatomic, readonly) NSArray *namespaces;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString *treatmentId;
@property (nonatomic, readonly) int type;

+ (id)recordWithDeploymentEnvironment:(int)arg1 experimentDeployment:(id)arg2 treatmentId:(id)arg3 type:(int)arg4 status:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 namespaces:(id)arg8 isShadow:(bool)arg9 isManuallyTargeted:(bool)arg10 artifact:(id)arg11;

- (void).cxx_destruct;
- (id)artifact;
- (id)copyWithReplacementArtifact:(id)arg1;
- (id)copyWithReplacementDeploymentEnvironment:(int)arg1;
- (id)copyWithReplacementEndDate:(id)arg1;
- (id)copyWithReplacementExperimentDeployment:(id)arg1;
- (id)copyWithReplacementIsManuallyTargeted:(bool)arg1;
- (id)copyWithReplacementIsShadow:(bool)arg1;
- (id)copyWithReplacementNamespaces:(id)arg1;
- (id)copyWithReplacementStartDate:(id)arg1;
- (id)copyWithReplacementStatus:(long long)arg1;
- (id)copyWithReplacementTreatmentId:(id)arg1;
- (id)copyWithReplacementType:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentEnvironment;
- (id)description;
- (id)endDate;
- (id)experimentDeployment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDeploymentEnvironment:(int)arg1 experimentDeployment:(id)arg2 treatmentId:(id)arg3 type:(int)arg4 status:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 namespaces:(id)arg8 isShadow:(bool)arg9 isManuallyTargeted:(bool)arg10 artifact:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (bool)isExpiredExperiment;
- (bool)isManuallyTargeted;
- (bool)isShadow;
- (id)namespaces;
- (id)startDate;
- (long long)status;
- (id)treatmentId;
- (int)type;

@end
