
@interface QLExternalThumbnailCache : NSObject <QLThumbnailCache> {
    NSURL * _databaseURL;
    QLExternalThumbnailCacheDatabase * _db;
    NSURL * _directoryURL;
    unsigned long long  _maximumCacheSize;
    NSURL * _thumbnailsDirectoryURL;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic, retain) QLExternalThumbnailCacheDatabase *db;
@property (nonatomic, readonly) NSURL *directoryURL;
@property (nonatomic, readonly) unsigned long long maximumCacheSize;
@property (nonatomic, readonly) NSURL *thumbnailsDirectoryURL;

+ (id)writeThumbnailImage:(struct CGImage { }*)arg1 inInboxAtURL:(id)arg2;

- (void).cxx_destruct;
- (bool)_createDirectoryWithURL:(id)arg1 error:(id*)arg2;
- (bool)_freeDiskSpaceToSaveThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id*)arg3;
- (bool)_saveOrUpdateCachedThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id*)arg3;
- (bool)_saveToDiskCachedThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id*)arg3;
- (bool)_updateDatabaseWithCachedThumbnailRepresentingFPItem:(id)arg1 withFileAtURL:(id)arg2 error:(id*)arg3;
- (id)_urlForThumbnailWithFPItem:(id)arg1 originalThumbnailURL:(id)arg2;
- (id)_urlForThumbnailWithFPItemIdentifier:(id)arg1 fileExtension:(id)arg2;
- (void)close;
- (id)databaseURL;
- (id)db;
- (void)dealloc;
- (id)directoryURL;
- (void)getThumbnailCacheURLWrappersWithCompletion:(id /* block */)arg1;
- (void)getThumbnailURLForItem:(id)arg1 completion:(id /* block */)arg2;
- (id)inboxDirectoryURL;
- (id)initWithDirectoryURL:(id)arg1 maximumCacheSize:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)maximumCacheSize;
- (bool)removeAllThumbnails:(id*)arg1;
- (void)setDb:(id)arg1;
- (void)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 completion:(id /* block */)arg3;
- (bool)storeThumbnailAtURL:(id)arg1 forItem:(id)arg2 error:(id*)arg3;
- (id)thumbnailURLForItem:(id)arg1 error:(id*)arg2;
- (id)thumbnailsDirectoryURL;
- (id)writeThumbnailImageInInbox:(struct CGImage { }*)arg1;

@end
