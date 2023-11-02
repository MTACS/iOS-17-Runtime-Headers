
@interface QLCacheFileInfo : NSObject {
    unsigned long long  _cacheId;
    QLCacheVersionedFileIdentifier * _fileIdentifier;
    float  _maxSize;
    float  _minSize;
    unsigned long long  _thumbnailCount;
    unsigned long long  _totalDataLength;
}

@property (nonatomic, readonly) unsigned long long cacheId;
@property (nonatomic, readonly) QLCacheVersionedFileIdentifier *fileIdentifier;
@property (nonatomic, readonly) float maxSize;
@property (nonatomic, readonly) float minSize;
@property (nonatomic, readonly) unsigned long long thumbnailCount;
@property (nonatomic, readonly) unsigned long long totalDataLength;

- (void).cxx_destruct;
- (unsigned long long)cacheId;
- (id)fileIdentifier;
- (id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2;
- (id)initWithCacheId:(unsigned long long)arg1 versionedFileIdentifier:(id)arg2 thumbnailCount:(unsigned long long)arg3 minSize:(float)arg4 maxSize:(float)arg5 totalDataLength:(unsigned long long)arg6;
- (float)maxSize;
- (float)minSize;
- (unsigned long long)thumbnailCount;
- (unsigned long long)totalDataLength;

@end
