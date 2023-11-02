
@interface PGMemoryController : NSObject {
    PGCurationManager * _curationManager;
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    PGMemoryGenerationContext * _memoryGenerationContext;
    NSMutableDictionary * _momentsByMomentIDs;
    PHPhotoLibrary * _photoLibrary;
    id /* block */  _progressBlock;
}

@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, retain) PGMemoryGenerationContext *memoryGenerationContext;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (copy) id /* block */ progressBlock;

+ (id)_localIdentifierOfMainPersonInEvent:(id)arg1 prominentOnly:(bool)arg2;
+ (bool)anyBlockedFeatureIn:(id)arg1 isHitByEvent:(id)arg2;

- (void).cxx_destruct;
- (bool)anyBlockedFeatureIsHitByEvent:(id)arg1;
- (id)assetCollectionWithAssetLocalIdentifiers:(id)arg1;
- (id)curationManager;
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2 loggingConnection:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (bool)libraryHasEnoughProcessedScenes:(bool)arg1 andProcessedFaces:(bool)arg2;
- (bool)libraryHasEnoughScenesProcessed:(bool)arg1 haveFacesProcessed:(bool)arg2 forYear:(id)arg3 withGraph:(id)arg4;
- (id)loggingConnection;
- (id)memoryGenerationContext;
- (id)momentForMomentID:(id)arg1;
- (bool)momentNodesHaveScenesProcessed:(id)arg1 inGraph:(id)arg2;
- (id)photoLibrary;
- (id /* block */)progressBlock;
- (void)setMemoryGenerationContext:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;

@end
