
@interface PHImportDuplicateChecker : NSObject {
    NSMutableDictionary * _assetIdentifierCache;
    NSMutableDictionary * _avchdAssetIdentifierCache;
    NSDate * _lastChange;
    PHPhotoLibrary * _library;
    NSMutableDictionary * _sizeNameCache;
    NSMutableSet * _updatedDupInfos;
}

@property (nonatomic, retain) PHPhotoLibrary *library;

+ (id)_dateWithDate:(id)arg1;
+ (id)_fetchAssetInfoFromLibrary:(id)arg1 forFileSizes:(id)arg2;
+ (id)duplicatesFromResults:(id)arg1 forLibrary:(id)arg2;

- (void).cxx_destruct;
- (id)_checkForDuplicate:(id)arg1 considerItemsInTheTrash:(bool)arg2;
- (id)_filterDuplicatesForItem:(id)arg1 duplicateSet:(id)arg2 considerItemsInTrash:(bool)arg3;
- (bool)_findFingerprint:(id)arg1 forItem:(id)arg2 inCache:(id)arg3 considerTrash:(bool)arg4;
- (id)_findMatchingAssetsForItem:(id)arg1 inSet:(id)arg2 matchingDate:(id*)arg3 confidence:(unsigned char*)arg4;
- (void)_populateCachesWithAssetInfo:(id)arg1;
- (unsigned long long)_populateCachesWithAssetsInfos:(id)arg1;
- (void)_setDupInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)_updateAssetsFromDupInfos;
- (void)findDuplicatesOfItems:(id)arg1 considerItemsInTrash:(bool)arg2 forEach:(id /* block */)arg3 atEnd:(id /* block */)arg4;
- (id)initWithLibrary:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;

@end
