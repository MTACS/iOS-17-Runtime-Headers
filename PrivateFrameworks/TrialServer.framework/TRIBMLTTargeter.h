
@interface TRIBMLTTargeter : NSObject {
    TRIBackgroundMLTaskDatabase * _db;
    <TRISystemCovariateProviding> * _systemCovariateProvider;
    <TRIUserCovariateProviding> * _userCovariateProvider;
}

@property (nonatomic, readonly) <TRISystemCovariateProviding> *systemCovariateProvider;
@property (nonatomic, readonly) <TRIUserCovariateProviding> *userCovariateProvider;

+ (id)_targetingErrorWithDeployment:(id)arg1 errorType:(id)arg2 details:(id)arg3;
+ (id)targetingErrorWithDeployment:(id)arg1 errorType:(id)arg2;

- (void).cxx_destruct;
- (struct { unsigned char x1; })_evaluateExpressionForDeployment:(id)arg1 context:(id)arg2 assignment:(id)arg3 fpsId:(id*)arg4 error:(id*)arg5;
- (id)init;
- (id)initWithDatabase:(id)arg1 systemCovariateProvider:(id)arg2 userCovariateProvider:(id)arg3;
- (id)systemCovariateProvider;
- (struct { unsigned char x1; })targetBMLT:(id)arg1 factorPackSetId:(id*)arg2 error:(id*)arg3;
- (id)userCovariateProvider;

@end
