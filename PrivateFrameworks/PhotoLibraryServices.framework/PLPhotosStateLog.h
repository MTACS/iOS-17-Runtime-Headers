
@interface PLPhotosStateLog : NSObject {
    NSObject<OS_dispatch_group> * _group;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *group;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned long long)arg3;
- (bool)compressFileFromPath:(id)arg1 toPath:(id)arg2;
- (bool)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(bool)arg5;
- (void)createSnapshot;
- (id)group;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)logAlbum:(id)arg1 index:(unsigned long long)arg2 indent:(unsigned long long)arg3 completeMetadata:(bool)arg4 printAssets:(bool)arg5;
- (void)logAlbumLists;
- (void)logAllAlbums;
- (void)logAssetCounts;
- (void)logDescription:(id)arg1;
- (void)logMoments;
- (id)photoLibrary;

@end
