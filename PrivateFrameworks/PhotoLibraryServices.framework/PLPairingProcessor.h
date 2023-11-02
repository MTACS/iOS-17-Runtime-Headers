
@interface PLPairingProcessor : NSObject {
    NSPredicate * _locatedInUsersPhotoLibrary;
}

@property (nonatomic, retain) NSPredicate *locatedInUsersPhotoLibrary;

- (void).cxx_destruct;
- (bool)_copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)_copyResourceOfType:(unsigned int)arg1 onAsset:(id)arg2 toType:(unsigned int)arg3 onAsset:(id)arg4 error:(id*)arg5;
- (void)_deleteResourceOfType:(unsigned int)arg1 forAsset:(id)arg2 verifyInserted:(bool)arg3 deleteFile:(bool)arg4;
- (id)combinePair:(id)arg1 error:(id*)arg2;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)arg1;
- (id)firstGroupFromAssets:(id)arg1;
- (id)groupIDForAsset:(id)arg1;
- (id)init;
- (id)locatedInUsersPhotoLibrary;
- (bool)processPairingForFetchRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (void)setDeferredProcessingIfNescessaryForAsset:(id)arg1;
- (void)setLocatedInUsersPhotoLibrary:(id)arg1;
- (bool)updatePrimaryAsset:(id)arg1 andRemoveAssetIfPossible:(id)arg2;

@end
