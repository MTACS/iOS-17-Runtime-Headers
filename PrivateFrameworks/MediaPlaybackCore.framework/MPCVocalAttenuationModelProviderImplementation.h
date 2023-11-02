
@interface MPCVocalAttenuationModelProviderImplementation : NSObject {
    NSObject<OS_dispatch_queue> * _creationQueue;
    NSError * _loadingError;
    MPCVocalAttenuationModel * _model;
    long long  _state;
}

@property (nonatomic, readonly, copy) NSString *basePath;
@property (nonatomic, copy) NSError *loadingError;
@property (nonatomic, retain) MPCVocalAttenuationModel *model;
@property (nonatomic, readonly, copy) NSString *modelName;
@property (nonatomic, readonly, copy) NSString *plistPath;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)_setupPaths;
- (id)baseDirectoryURL;
- (id)baseModelDirectoryURL;
- (id)basePath;
- (id)bundleModelDirectoryURL;
- (id)directoriesAtURL:(id)arg1;
- (id)init;
- (bool)isValidEspressoFile:(id)arg1;
- (bool)isValidModelFile:(id)arg1;
- (bool)isValidPlistModelFile:(id)arg1;
- (id)latestModelDirectoryAtURL:(id)arg1;
- (id)loadingError;
- (id)model;
- (id)modelFileExtensions;
- (id)modelName;
- (bool)moveModelFromURL:(id)arg1 toURL:(id)arg2;
- (id)plistPath;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (void)purgeModelAtURL:(id)arg1;
- (void)purgeSideLoadedModelDirectoriesAtURL:(id)arg1;
- (id)remoteModelDirectoryURL;
- (void)setLoadingError:(id)arg1;
- (void)setModel:(id)arg1;
- (long long)state;
- (bool)validateModelAtURL:(id)arg1;

@end
