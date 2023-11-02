
@interface QLCacheIndexDatabaseQueryEnumerator : QLCacheIndexDatabaseGenericEnumerator {
    NSArray * _allFileRequests;
    unsigned long long  _badgeType;
    QLCacheBlobInfo * _bitmapDataBlobInfo;
    QLTBitmapFormat * _bitmapFormat;
    unsigned long long  _cacheId;
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
    NSDictionary * _fileRequests;
    int  _flavor;
    unsigned int  _hitCount;
    unsigned char  _iconMode;
    long long  _iconVariant;
    int  _interpolationQuality;
    NSDate * _lastHitDate;
    QLCacheBlobInfo * _plistBufferBlobInfo;
    float  _size;
}

@property (nonatomic, readonly) unsigned long long badgeType;
@property (nonatomic, readonly) QLCacheBlobInfo *bitmapDataBlobInfo;
@property (nonatomic, readonly) QLTBitmapFormat *bitmapFormat;
@property (nonatomic, readonly) unsigned long long cacheId;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic, readonly) unsigned long long externalGeneratorDataHash;
@property (nonatomic, readonly) QLCacheFileIdentifier *fileIdentifier;
@property (nonatomic, readonly) int flavor;
@property (nonatomic, readonly) unsigned int hitCount;
@property (nonatomic, readonly) unsigned char iconMode;
@property (nonatomic, readonly) long long iconVariant;
@property (nonatomic, readonly) int interpolationQuality;
@property (nonatomic, readonly) NSDate *lastHitDate;
@property (nonatomic, readonly) QLCacheBlobInfo *metadataBlobInfo;
@property (nonatomic, readonly) float size;

- (void).cxx_destruct;
- (void)_getCacheIds;
- (void)_getCacheIdsForHomogeneousArrayOfRequests:(id)arg1;
- (unsigned long long)badgeType;
- (id)bitmapDataBlobInfo;
- (id)bitmapFormat;
- (unsigned long long)cacheId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (unsigned long long)externalGeneratorDataHash;
- (id)fileIdentifier;
- (int)flavor;
- (unsigned int)hitCount;
- (unsigned char)iconMode;
- (long long)iconVariant;
- (id)initWithSqliteDatabase:(id)arg1 fileRequests:(id)arg2;
- (int)interpolationQuality;
- (id)lastHitDate;
- (id)metadataBlobInfo;
- (bool)nextThumbnailInfo;
- (float)size;

@end
