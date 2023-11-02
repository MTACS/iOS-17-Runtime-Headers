
@interface _EARAppLmArtifact : _EARArtifact {
    NSString * _cachedConfigFilepath;
    NSString * _cachedDataRoot;
    struct shared_ptr<quasar::AppLmData> { 
        struct AppLmData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _cachedLmData;
    NSString * _cachedNcsRoot;
}

+ (bool)createEmptyArtifact:(id)arg1 version:(id)arg2 locale:(id)arg3 saveTo:(id)arg4;
+ (bool)createPhraseCountsArtifact:(id)arg1 version:(id)arg2 locale:(id)arg3 rawPhraseCountsPath:(id)arg4 customPronunciationsPath:(id)arg5 saveTo:(id)arg6;
+ (id)loadLmHandleFromArtifactAt:(id)arg1 configPath:(id)arg2;
+ (id)loadLmHandleFromArtifactAt:(id)arg1 configPath:(id)arg2 ncsRoot:(id)arg3;
+ (id)transitionArtifactAt:(id)arg1 toStage:(unsigned long long)arg2 configPath:(id)arg3 dataRoot:(id)arg4 estimationRoot:(id)arg5 minimize:(bool)arg6;
+ (bool)transitionArtifactAt:(id)arg1 toStage:(unsigned long long)arg2 configPath:(id)arg3 dataRoot:(id)arg4 estimationRoot:(id)arg5 minimize:(bool)arg6 saveTo:(id)arg7;
+ (id)transitionArtifactAt:(id)arg1 toStage:(unsigned long long)arg2 configPath:(id)arg3 ncsRoot:(id)arg4 dataRoot:(id)arg5 estimationRoot:(id)arg6 minimize:(bool)arg7;
+ (bool)transitionArtifactAt:(id)arg1 toStage:(unsigned long long)arg2 configPath:(id)arg3 ncsRoot:(id)arg4 dataRoot:(id)arg5 estimationRoot:(id)arg6 minimize:(bool)arg7 saveTo:(id)arg8;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cacheLmData:(struct shared_ptr<quasar::AppLmData> { struct AppLmData {} *x1; struct __shared_weak_count {} *x2; })arg1 configFilepath:(id)arg2 ncsRoot:(id)arg3 dataRoot:(id)arg4;
- (struct shared_ptr<quasar::AppLmData> { struct AppLmData {} *x1; struct __shared_weak_count {} *x2; })_loadRawAppLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;
- (struct shared_ptr<quasar::AppLmData> { struct AppLmData {} *x1; struct __shared_weak_count {} *x2; })_tryToLoadCachedLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;
- (unsigned long long)getLifeCycleStage;
- (id)initWithAppLmArtifact:(struct shared_ptr<quasar::artifact::AppLmArtifact> { struct AppLmArtifact {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithVersion:(id)arg1 andLocale:(id)arg2;
- (bool)isAdaptableToSpeechModelVersion:(id)arg1 locale:(id)arg2;
- (id)loadAppLmData:(id)arg1 dataRoot:(id)arg2;
- (id)loadAppLmData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;
- (id)loadCustomPronData:(id)arg1 dataRoot:(id)arg2;
- (id)loadCustomPronData:(id)arg1 ncsRoot:(id)arg2 dataRoot:(id)arg3;
- (id)loadLmHandle;
- (id)loadOovs;

@end
