
@interface ALAssetsLibraryPrivate : NSObject {
    NSHashTable * _assetGroupInternals;
    ALAssetsLibrary * _assetsLibrary;
    NSMutableDictionary * _groupURLSByAlbumOID;
    bool  _isValid;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic) ALAssetsLibrary *assetsLibrary;
@property (nonatomic) bool isValid;
@property (nonatomic, readonly, retain) PLPhotoLibrary *photoLibrary;

- (id)assetsLibrary;
- (void)dealloc;
- (id)initWithAssetsLibrary:(id)arg1;
- (bool)isValid;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerAlbum:(id)arg1 assetGroupPrivate:(id)arg2;
- (void)setAssetsLibrary:(id)arg1;
- (void)setIsValid:(bool)arg1;

@end
