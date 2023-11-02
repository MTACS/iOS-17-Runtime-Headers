
@interface CPLEngineDerivativesCache : NSObject {
    NSURL * _cacheMappingURL;
    NSURL * _cacheURL;
    Class  _derivativeGeneratorClass;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _tryCreatingCacheFolder;
}

@property (nonatomic, readonly, copy) NSURL *cacheURL;
@property (nonatomic, retain) Class derivativeGeneratorClass;

- (void).cxx_destruct;
- (id)_cacheKeyForReferenceResource:(id)arg1 adjustments:(id)arg2 includePosterFrame:(bool)arg3;
- (bool)_checkGeneratedResources:(id)arg1 error:(id*)arg2;
- (bool)_checkResource:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (void)_createCacheFolderIfNecessary;
- (id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 includePosterFrame:(bool)arg3;
- (id)_folderNameForReferenceResource:(id)arg1 adjustment:(id)arg2 includePosterFrame:(bool)arg3;
- (bool)_isUnsupportedFormatError:(id)arg1;
- (id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 includePosterFrame:(bool)arg3;
- (void)_updateChange:(id*)arg1 fromOldChange:(id)arg2 withResources:(id)arg3 excludeImages:(bool)arg4;
- (id)cacheURL;
- (id)cachedResourcesForReferenceResource:(id)arg1 adjustment:(id)arg2 includePosterFrame:(bool)arg3;
- (Class)derivativeGeneratorClass;
- (void)discardCache;
- (void)generateDerivativesForChange:(id)arg1 derivativesFilter:(id)arg2 fingerprintScheme:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithCacheURL:(id)arg1;
- (void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2 adjustment:(id)arg3 includePosterFrame:(bool)arg4;
- (void)setDerivativeGeneratorClass:(Class)arg1;
- (id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 includePosterFrame:(bool)arg3;

@end
