
@interface SNLPSSUMatcherDirectories : NSObject {
    NSURL * _cacheDirectoryURL;
    NSURL * _datasetAssetsDirectoryURL;
    NSURL * _modelAssetsDirectoryURL;
}

@property (readonly) NSURL *cacheDirectoryURL;
@property (readonly) NSURL *datasetAssetsDirectoryURL;
@property (readonly) NSURL *modelAssetsDirectoryURL;

+ (id)directoriesWithCacheDirectoryURL:(id)arg1 modelAssetsDirectoryURL:(id)arg2 datasetAssetsDirectoryURL:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)cacheDirectoryURL;
- (id)datasetAssetsDirectoryURL;
- (id)initWithCacheDirectoryURL:(id)arg1 modelAssetsDirectoryURL:(id)arg2 datasetAssetsDirectoryURL:(id)arg3;
- (id)modelAssetsDirectoryURL;

@end
