
@interface AMDJSInference : NSObject

+ (void)appendInAppEventDataTo:(id)arg1 forDsId:(id)arg2 withInferencePayload:(id)arg3;
+ (bool)areValidInputs:(id)arg1 domainOut:(long long*)arg2 useCaseIdsArray:(id)arg3 useCaseIdsSetOut:(id*)arg4 storeFrontIdString:(id)arg5 storeFrontIdOut:(id*)arg6 dsId:(id)arg7 error:(id*)arg8;
+ (id)getDataForBizLogicForWorkflow:(id)arg1 useCaseId:(id)arg2 domainName:(id)arg3;
+ (id)getIdAndScoresFrom:(id)arg1 useCaseId:(id)arg2 summary:(id)arg3 bigGummary:(id)arg4 errorKey:(id)arg5;
+ (id)getPredictionForUseCase:(id)arg1 treatmentId:(id)arg2 UsingWorkflow:(id)arg3 domainName:(id)arg4 persistanceInfo:(id)arg5 summary:(id)arg6 bigSummary:(id)arg7 errorKey:(id)arg8;
+ (id)getWorkflowForUseCase:(id)arg1 treatmentId:(id)arg2 domain:(long long)arg3 summary:(id)arg4 bigSummary:(id)arg5 errorKey:(id)arg6;
+ (bool)persist:(id)arg1 withHandle:(id)arg2 domainName:(id)arg3 summary:(id)arg4;
+ (id)runInference:(id)arg1 error:(id*)arg2;

@end
