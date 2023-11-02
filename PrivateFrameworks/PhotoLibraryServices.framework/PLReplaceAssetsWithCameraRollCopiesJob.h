
@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob {
    PLManagedAlbum * _album;
    NSArray * _assets;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, retain) PLManagedAlbum *album;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) PLManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;

+ (void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2;

- (void).cxx_destruct;
- (id)_cameraRollAssetDerivedFromAsset:(id)arg1;
- (id)album;
- (id)assets;
- (id)coordinator;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)managedObjectContext;
- (id)photoLibrary;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbum:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
