
@interface QLCacheIndexFileRequest : NSObject {
    bool  _atLeastOneLowQuality;
    NSMutableArray * _badgeTypes;
    unsigned long long  _cacheId;
    NSMutableArray * _externalGeneratorDataHashs;
    QLCacheFileIdentifier * _fileIdentifier;
    struct __CFArray { } * _iconModes;
    NSMutableArray * _iconVariants;
    NSMutableArray * _interpolationQualities;
    struct __CFArray { } * _lowQualities;
    NSMutableArray * _minimumSizes;
    struct __CFArray { } * _sizes;
    QLThumbnailVersion * _version;
}

@property (readonly) unsigned long long cacheId;
@property (readonly) QLCacheFileIdentifier *fileIdentifier;
@property (readonly) QLThumbnailVersion *version;

- (void).cxx_destruct;
- (void)_setCacheId:(unsigned long long)arg1;
- (bool)allSizes;
- (void)appendSize:(float)arg1 minimumSize:(float)arg2 withIconMode:(unsigned char)arg3 lowQuality:(bool)arg4 badgeType:(unsigned long long)arg5 iconVariant:(long long)arg6 interpolationQuality:(int)arg7 externalGeneratorDataHash:(unsigned long long)arg8;
- (unsigned long long)badgeTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)cacheId;
- (void)dealloc;
- (unsigned long long)externalGeneratorDataHashAtIndex:(unsigned long long)arg1;
- (id)fileIdentifier;
- (bool)hasAtLeastOneLowQuality;
- (unsigned char)iconModeAtIndex:(long long)arg1;
- (long long)iconVariantAtIndex:(unsigned long long)arg1;
- (id)initWithFileIdentifier:(id)arg1;
- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;
- (id)initWithVersionedFileIdentifier:(id)arg1;
- (int)interpolationQualityAtIndex:(unsigned long long)arg1;
- (unsigned char)lowQualityAtIndex:(long long)arg1;
- (float)minimumSizeAtIndex:(unsigned long long)arg1;
- (long long)sizeAndIconModeCount;
- (float)sizeAtIndex:(long long)arg1;
- (id)version;

@end
