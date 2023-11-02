
@interface SSUMatcherBuildParams : NSObject <NSCopying> {
    NSURL * _cacheDirectoryURL;
    NSURL * _datasetAssetsDirectoryURL;
    NSURL * _modelAssetsDirectoryURL;
}

@property (readonly) NSURL *cacheDirectoryURL;
@property (readonly) NSURL *datasetAssetsDirectoryURL;
@property (readonly) NSURL *modelAssetsDirectoryURL;

- (void).cxx_destruct;
- (id)cacheDirectoryURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAssetsDirectoryURL;
- (unsigned long long)hash;
- (id)initWithModelAssetsDirectoryURL:(id)arg1 datasetAssetsDirectoryURL:(id)arg2 cacheDirectoryURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)modelAssetsDirectoryURL;

@end
