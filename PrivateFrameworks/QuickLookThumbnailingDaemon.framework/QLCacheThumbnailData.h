
@interface QLCacheThumbnailData : NSObject {
    unsigned long long  _badgeType;
    NSData * _bitmapData;
    QLCacheBlobInfo * _bitmapDataToValidate;
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
    int  _flavor;
    unsigned long long  _hitCount;
    bool  _iconMode;
    long long  _iconVariant;
    int  _interpolationQuality;
    NSDate * _lastHitDate;
    NSData * _metadata;
    QLCacheBlobInfo * _metadataToValidate;
    NSObject<OS_dispatch_queue> * _queue;
    float  _size;
    unsigned long long  _state;
    unsigned long long  _totalBufferSize;
    QLThumbnailVersion * _version;
}

@property (nonatomic, readonly) unsigned long long badgeType;
@property (nonatomic, readonly) NSData *bitmapData;
@property (nonatomic, retain) QLCacheBlobInfo *bitmapDataToValidate;
@property (nonatomic, readonly) QLTBitmapFormat *bitmapFormat;
@property (nonatomic, readonly) unsigned long long cacheId;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic, readonly) unsigned long long externalGeneratorDataHash;
@property (nonatomic, readonly) QLCacheFileIdentifier *fileIdentifier;
@property (nonatomic, readonly) int flavor;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) unsigned long long hitCount;
@property (nonatomic, readonly) bool iconMode;
@property (nonatomic, readonly) long long iconVariant;
@property (nonatomic, readonly) int interpolationQuality;
@property (nonatomic, readonly, copy) NSDate *lastHitDate;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, retain) QLCacheBlobInfo *metadataToValidate;
@property (nonatomic, readonly) float size;
@property (nonatomic, readonly) unsigned long long totalBufferSize;
@property (nonatomic, readonly) QLThumbnailVersion *version;

- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (id)bitmapData;
- (id)bitmapDataToValidate;
- (id)bitmapFormat;
- (unsigned long long)cacheId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (void)dealloc;
- (unsigned long long)externalGeneratorDataHash;
- (id)fileIdentifier;
- (int)flavor;
- (bool)hasData;
- (unsigned long long)hitCount;
- (bool)iconMode;
- (long long)iconVariant;
- (id)initWithCacheId:(unsigned long long)arg1 fileIdentifier:(id)arg2 version:(id)arg3 size:(float)arg4 iconMode:(bool)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 badgeType:(unsigned long long)arg8 externalGeneratorDataHash:(unsigned long long)arg9 hitCount:(unsigned long long)arg10 lastHitDate:(id)arg11;
- (id)initWithCacheId:(unsigned long long)arg1 fileIdentifier:(id)arg2 version:(id)arg3 size:(float)arg4 iconMode:(bool)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 hitCount:(unsigned long long)arg8 lastHitDate:(id)arg9 bitmapFormat:(id)arg10 bitmapData:(id)arg11 metadata:(id)arg12 flavor:(int)arg13 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg14 badgeType:(unsigned long long)arg15 externalGeneratorDataHash:(unsigned long long)arg16;
- (id)initWithCacheId:(unsigned long long)arg1 thumbnailRequest:(id)arg2 size:(float)arg3 badgeType:(unsigned long long)arg4;
- (id)initWithCacheId:(unsigned long long)arg1 thumbnailRequest:(id)arg2 size:(float)arg3 bitmapFormat:(id)arg4 bitmapData:(id)arg5 metadata:(id)arg6 flavor:(int)arg7 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 badgeType:(unsigned long long)arg9;
- (id)initWithUnsavedDataForThumbnailRequest:(id)arg1 size:(float)arg2 bitmapFormat:(id)arg3 bitmapData:(id)arg4 reservationInfo:(id)arg5 metadata:(id)arg6 reservationInfo:(id)arg7 flavor:(int)arg8 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg9 badgeType:(unsigned long long)arg10;
- (int)interpolationQuality;
- (id)lastHitDate;
- (id)metadata;
- (id)metadataToValidate;
- (void)setBitmapDataToValidate:(id)arg1;
- (void)setMetadataToValidate:(id)arg1;
- (bool)setState:(unsigned long long)arg1;
- (bool)setState:(unsigned long long)arg1 changedState:(bool*)arg2;
- (float)size;
- (unsigned long long)state;
- (unsigned long long)totalBufferSize;
- (id)version;

@end
