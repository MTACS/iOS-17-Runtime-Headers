
@interface TRIRolloutTargeter : NSObject <TRIRolloutTargeting> {
    TRIRolloutDatabase * _db;
    <TRISystemCovariateProviding> * _systemCovariateProvider;
    <TRIUserCovariateProviding> * _userCovariateProvider;
}

@property (nonatomic, readonly) <TRISystemCovariateProviding> *systemCovariateProvider;
@property (nonatomic, readonly) <TRIUserCovariateProviding> *userCovariateProvider;

+ (id)_targetingErrorWithDeployment:(id)arg1 errorType:(id)arg2 details:(id)arg3;
+ (id)targetingErrorWithDeployment:(id)arg1 errorType:(id)arg2;

- (void).cxx_destruct;
- (id)_activeRecordForRolloutId:(id)arg1;
- (struct { unsigned char x1; })_targetRollout:(id)arg1 factorPackSetId:(id*)arg2 relatedRampDeployment:(id*)arg3 recurseOnRamp:(bool)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithDatabase:(id)arg1 systemCovariateProvider:(id)arg2 userCovariateProvider:(id)arg3;
- (id)systemCovariateProvider;
- (struct { unsigned char x1; })targetRollout:(id)arg1 factorPackSetId:(id*)arg2 relatedRampDeployment:(id*)arg3 error:(id*)arg4;
- (id)userCovariateProvider;

@end
