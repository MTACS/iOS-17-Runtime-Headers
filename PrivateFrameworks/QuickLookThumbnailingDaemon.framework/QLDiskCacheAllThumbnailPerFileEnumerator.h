
@interface QLDiskCacheAllThumbnailPerFileEnumerator : QLDiskCacheEnumerator {
    NSData * _bitmapData;
    QLCacheBlobInfo * _bitmapDataBlobInfo;
    QLCacheIndexDatabaseQueryEnumerator * _cacheIndexDatabaseEnumerator;
    QLCacheFileIdentifier * _fileIdentifier;
    NSData * _metadata;
    QLCacheBlobInfo * _metadataBlobInfo;
    QLCacheThumbnailData * _thumbnailData;
}

- (void).cxx_destruct;
- (void)_createNewCacheIndexDatabaseEnumeratorWithFileIdentifier:(id)arg1;
- (id)initWithDiskCache:(id)arg1 fileIdentifier:(id)arg2;
- (id)nextThumbnailData;

@end
