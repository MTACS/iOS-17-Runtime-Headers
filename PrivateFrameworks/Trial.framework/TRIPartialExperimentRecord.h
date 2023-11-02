
@interface TRIPartialExperimentRecord : NSObject <NSCopying, NSSecureCoding> {
    int  _deploymentEnvironment;
    NSDate * _endDate;
    TRIExperimentDeployment * _experimentDeployment;
    bool  _isShadow;
    NSArray * _namespaces;
    NSDate * _startDate;
    long long  _status;
    NSString * _treatmentId;
    int  _type;
}

@property (nonatomic, readonly) int deploymentEnvironment;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) TRIExperimentDeployment *experimentDeployment;
@property (nonatomic, readonly) bool isShadow;
@property (nonatomic, readonly) NSArray *namespaces;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString *treatmentId;
@property (nonatomic, readonly) int type;

+ (id)recordWithDeploymentEnvironment:(int)arg1 experimentDeployment:(id)arg2 treatmentId:(id)arg3 type:(int)arg4 status:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 namespaces:(id)arg8 isShadow:(bool)arg9;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeploymentEnvironment:(int)arg1;
- (id)copyWithReplacementEndDate:(id)arg1;
- (id)copyWithReplacementExperimentDeployment:(id)arg1;
- (id)copyWithReplacementIsShadow:(bool)arg1;
- (id)copyWithReplacementNamespaces:(id)arg1;
- (id)copyWithReplacementStartDate:(id)arg1;
- (id)copyWithReplacementStatus:(long long)arg1;
- (id)copyWithReplacementTreatmentId:(id)arg1;
- (id)copyWithReplacementType:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentEnvironment;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)experimentDeployment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeploymentEnvironment:(int)arg1 experimentDeployment:(id)arg2 treatmentId:(id)arg3 type:(int)arg4 status:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7 namespaces:(id)arg8 isShadow:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (bool)isShadow;
- (id)namespaces;
- (id)startDate;
- (long long)status;
- (id)treatmentId;
- (int)type;

@end
