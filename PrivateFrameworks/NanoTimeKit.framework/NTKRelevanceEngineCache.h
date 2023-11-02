
@interface NTKRelevanceEngineCache : NSObject <NTKFaceCollectionObserver, RERelevanceEngineObserver> {
    RERelevanceEngine * _canonicalRelevanceEngineIgnoringAppInstallations;
    RERelevanceEngine * _coordinator;
    NSLock * _coordinatorLock;
    bool  _isEditing;
    NTKFaceCollection * _libraryCollection;
    RERelevanceEngine * _staticCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_dataSourceLoaderForRelevanceEngineDataSourcesForKey:(id)arg1;
+ (id)_globallyCachedCanonicalRelevanceEngine;
+ (id)_modelFileLocation;
+ (id)sampleConfiguration;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_beginLoadingDataForEngine:(id)arg1;
- (void)_clockViewControllerDidBeginEditing;
- (void)_clockViewControllerDidEndEditing;
- (void)_clockViewControllerDidEnterAddable;
- (bool)_faceCollectionContainsSiriFace:(id)arg1;
- (bool)_faceCollectionNeedsLiveElementCoordinator:(id)arg1;
- (bool)_faceNeedsElementCoordinator:(id)arg1;
- (void)_loadCoordinatorIfNeeded;
- (bool)_needsLiveElementCoordinator;
- (void)_refreshLiveCoordinator;
- (void)_unloadCoordinatorIfNeeded;
- (id)canonicalRelevanceEngine;
- (id)canonicalRelevanceEngineIgnoringAppInstallations;
- (void)dealloc;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollectionDidReorderFaces:(id)arg1;
- (void)faceCollectionDidReset:(id)arg1;
- (id)init;
- (void)prewarm;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)setLibraryCollection:(id)arg1;
- (id)sharedRelevanceEngine;

@end
