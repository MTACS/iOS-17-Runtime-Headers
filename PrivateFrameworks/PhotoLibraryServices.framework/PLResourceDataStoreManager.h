
@interface PLResourceDataStoreManager : NSObject

+ (id)storeExternalResources:(id)arg1 forAsset:(id)arg2 forLifecycleEvent:(unsigned int)arg3 error:(id*)arg4;
+ (id)storeForExternalResource:(id)arg1 inLibraryWithID:(id)arg2;
+ (id)storesForLibraryID:(id)arg1;
+ (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;

@end
