
@interface PLManagedAssetID : NSObject <PLAssetID> {
    unsigned short  _bundleScope;
    NSString * _directory;
    NSString * _filename;
    PLPhotoLibraryPathManagerIdentifier * _libraryID;
    NSString * _uuid;
}

@property (nonatomic) unsigned short bundleScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directory;
@property (nonatomic, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (unsigned short)bundleScope;
- (id)directory;
- (id)filename;
- (id)initWithManagedAsset:(id)arg1;
- (id)initWithUUID:(id)arg1 filename:(id)arg2 directory:(id)arg3 libraryID:(id)arg4 bundleScope:(unsigned short)arg5;
- (id)libraryID;
- (void)setBundleScope:(unsigned short)arg1;
- (void)setDirectory:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setLibraryID:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
