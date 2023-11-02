
@interface PHAPrivateFederatedLearningFacade : NSObject {
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
- (void)runPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 resultBlock:(id /* block */)arg3;
- (void)setAnalytics:(id)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setSystemPhotoLibrary:(id)arg1;
- (id)systemPhotoLibrary;

@end
