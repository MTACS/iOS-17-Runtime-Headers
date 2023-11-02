
@interface PLThumbnailResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    <NSObject> * _clientBackgroundTransitionObserverToken;
    NSObject<OS_dispatch_source> * _configWatcherSource;
    PLLazyObject * _lazyThumbnailFormats;
    PLLazyObject * _lazyThumbnailFormatsByTableType;
    PLLazyObject * _lazyThumbnailManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    NSArray * _overridenThumbnailFormats;
    PLThumbnailIndexes * _thumbnailIndexes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;
@property (readonly) NSArray *thumbnailFormats;
@property (readonly) PLThumbnailIndexes *thumbnailIndexes;
@property (readonly) PLThumbnailManager *thumbnailManager;

+ (id)_tableFormatsByTableTypeFromFormats:(id)arg1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (bool)resourceIsSquare:(id)arg1;
+ (unsigned short)storeClassID;
+ (id)supportedRecipes;

- (void).cxx_destruct;
- (void)_installBackgroundWatcher;
- (id)_makeThumbnailManager;
- (void)_startWatchingThumbnailConfigFile;
- (void)_stopWatchingThumbnailConfigFile;
- (struct PLImageTableEntryFooter_s { struct { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned char x_1_1_5; unsigned char x_1_1_6; unsigned char x_1_1_7; unsigned char x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; unsigned char x_1_1_15; unsigned char x_1_1_16; } x1; unsigned int x2; unsigned int x3; int x4; }*)_tableFooterForKey:(id)arg1;
- (bool)canStoreExternalResource:(id)arg1;
- (void)dealloc;
- (id)descriptionForSubtype:(long long)arg1;
- (id)expectedFileURLForResource:(id)arg1 asset:(id)arg2;
- (id)initWithPathManager:(id)arg1;
- (void)invalidateThumbnailManager;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)name;
- (struct CGImage { }*)newTableThumbImageForKey:(id)arg1;
- (void)overrideThumbnailFormatsWithFormatIDs:(id)arg1;
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 error:(id*)arg4 resultingResource:(id*)arg5;
- (bool)thumbnailForKey:(id)arg1 matchesAssetID:(id)arg2;
- (id)thumbnailFormats;
- (id)thumbnailFormatsByTableType;
- (id)thumbnailIndexes;
- (id)thumbnailManager;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
