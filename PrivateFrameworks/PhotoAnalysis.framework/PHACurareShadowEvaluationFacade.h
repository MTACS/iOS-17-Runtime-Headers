
@interface PHACurareShadowEvaluationFacade : NSObject {
    CPAnalytics * _analytics;
    PGManager * _graphManager;
    PHPhotoLibrary * _systemPhotoLibrary;
}

@property (nonatomic, retain) CPAnalytics *analytics;
@property (nonatomic, retain) PGManager *graphManager;
@property (nonatomic, retain) PHPhotoLibrary *systemPhotoLibrary;

- (void).cxx_destruct;
- (id)analytics;
- (id)graphManager;
- (id)initWithPhotosLibrary:(id)arg1 graphManagerProgress:(id /* block */)arg2;
- (void)runPFLRecipeUserInfo:(id)arg1 models:(id)arg2 trialDeploymentID:(id)arg3 trialExperimentID:(id)arg4 trialTreatmentID:(id)arg5 resultBlock:(id /* block */)arg6;
- (void)setAnalytics:(id)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setSystemPhotoLibrary:(id)arg1;
- (id)systemPhotoLibrary;

@end
