
@interface PXStoryPHAssetCollectionPersistableRecipeWriter : NSObject <PXStoryPersistableRecipeWriter> {
    PHAssetCollection * _assetCollection;
    PHFetchResult * _referencePersons;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *referencePersons;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 referencePersons:(id)arg2;
- (id)referencePersons;
- (id)workQueue;
- (id)writePersistableRecipe:(id)arg1 assetEdits:(id)arg2 undoManager:(id)arg3 resultHandler:(id /* block */)arg4;

@end
