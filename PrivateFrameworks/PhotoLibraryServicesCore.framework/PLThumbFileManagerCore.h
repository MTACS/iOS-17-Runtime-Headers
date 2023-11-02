
@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager> {
    PLImageFormat * _format;
    NSString * _path;
    PLPhotoLibraryPathManager * _pathManager;
    bool  _readOnly;
    unsigned int  _recipeId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) PLImageFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

+ (id)_fileIdentifierForThumbnailIdentifierComponents:(id)arg1 recipeID:(unsigned int)arg2;
+ (struct { int x1; int x2; })maxMasterSizeFromSourceImageSize:(struct { int x1; int x2; })arg1 format:(id)arg2;
+ (id)thumbnailIdentifierURLComponentsForUBFWithAssetUUID:(id)arg1 bundleScope:(unsigned short)arg2;
+ (id)thumbnailPathForThumbIdentifier:(id)arg1 withPathManager:(id)arg2 recipeID:(unsigned int)arg3 forDelete:(bool)arg4;

- (void).cxx_destruct;
- (id)_debugDescription;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (struct CGImage { }*)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;
- (void)deleteEntryWithIdentifier:(id)arg1;
- (id)description;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (id)format;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (id)initWithImageFormat:(id)arg1 pathManager:(id)arg2;
- (bool)isReadOnly;
- (id)path;
- (void)preheatDataForThumbnailIndexes:(id)arg1;
- (bool)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (id)thumbnailPathForThumbIdentifier:(id)arg1;
- (bool)usesThumbIdentifiers;
- (bool)validateData:(id)arg1 withToken:(id)arg2;

@end
