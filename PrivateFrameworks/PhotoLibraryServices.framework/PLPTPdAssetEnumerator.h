
@interface PLPTPdAssetEnumerator : NSObject {
    PLPTPdAssetManager * _assetManager;
    NSArray * _assetObjectIDs;
    <PLPTPConversionSupport> * _conversionSupport;
    PLManagedObjectContext * _managedObjectContext;
}

+ (id)enumeratorForAssetManager:(id)arg1 assetObjectIDs:(id)arg2 managedObjectContext:(id)arg3 conversionSupport:(id)arg4;

- (void).cxx_destruct;
- (id)_enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2;
- (id)assetsFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)enumerateAssetsUsingBlock:(id /* block */)arg1;
- (bool)enumerateAssetsWithCount:(unsigned long long)arg1 fetchOffset:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithAssetManager:(id)arg1 assetObjectIDs:(id)arg2 managedObjectContext:(id)arg3 conversionSupport:(id)arg4;

@end
