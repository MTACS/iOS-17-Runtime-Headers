
@interface QLDiskCacheQueryEnumerator : QLDiskCacheEnumerator {
    unsigned long long  _badgeType;
    NSData * _bitmapData;
    QLCacheBlobInfo * _bitmapDataBlobInfo;
    QLTBitmapFormat * _bitmapFormat;
    unsigned long long  _cacheId;
    QLCacheIndexDatabaseQueryEnumerator * _cacheIndexDatabaseEnumerator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    unsigned long long  _externalGeneratorDataHash;
    QLCacheFileIdentifier * _fileIdentifier;
    int  _flavor;
    QLTGeneratorThumbnailRequest * _generatorRequest;
    NSMutableDictionary * _generatorRequestBeingProcessed;
    NSDictionary * _generatorRequests;
    bool  _iconMode;
    long long  _iconVariant;
    int  _interpolationQuality;
    NSData * _metadata;
    QLCacheBlobInfo * _metadataBlobInfo;
    NSMutableArray * _sameGeneratorRequests;
    float  _size;
    QLCacheThumbnailData * _thumbnailData;
    bool  _valueFound;
}

@property unsigned long long badgeType;
@property (retain) QLCacheBlobInfo *bitmapDataBlobInfo;
@property unsigned long long externalGeneratorDataHash;
@property (retain) NSMutableDictionary *generatorRequestBeingProcessed;
@property bool iconMode;
@property long long iconVariant;
@property int interpolationQuality;
@property (retain) NSMutableArray *sameGeneratorRequests;
@property float size;

- (void).cxx_destruct;
- (void)_cleanUpValues;
- (void)_createNewCacheIndexDatabaseEnumerator;
- (void)_findThumbnailRequestsToProcess;
- (unsigned long long)badgeType;
- (id)bitmapDataBlobInfo;
- (void)dealloc;
- (unsigned long long)externalGeneratorDataHash;
- (id)generatorRequestBeingProcessed;
- (bool)iconMode;
- (long long)iconVariant;
- (id)initWithDiskCache:(id)arg1 thumbnailRequests:(id)arg2;
- (int)interpolationQuality;
- (void)moveThumbnailRequestsFromBeingProcessedToSameRequestIfTheyMatch:(id /* block */)arg1;
- (id)nextThumbnailRequestWithThumbnailData:(id*)arg1;
- (id)sameGeneratorRequests;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setBitmapDataBlobInfo:(id)arg1;
- (void)setExternalGeneratorDataHash:(unsigned long long)arg1;
- (void)setGeneratorRequestBeingProcessed:(id)arg1;
- (void)setIconMode:(bool)arg1;
- (void)setIconVariant:(long long)arg1;
- (void)setInterpolationQuality:(int)arg1;
- (void)setSameGeneratorRequests:(id)arg1;
- (void)setSize:(float)arg1;
- (float)size;

@end
