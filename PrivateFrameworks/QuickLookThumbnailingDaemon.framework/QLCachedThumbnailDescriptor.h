
@interface QLCachedThumbnailDescriptor : NSObject <NSCopying> {
    unsigned long long  _badgeType;
    unsigned long long  _externalGeneratorDataHash;
    bool  _iconMode;
    long long  _iconVariant;
    int  _interpolationQuality;
    float  _size;
}

@property (readonly) unsigned long long badgeType;
@property unsigned long long externalGeneratorDataHash;
@property (readonly) bool iconMode;
@property long long iconVariant;
@property int interpolationQuality;
@property (readonly) float size;

- (unsigned long long)badgeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)externalGeneratorDataHash;
- (unsigned long long)hash;
- (bool)iconMode;
- (long long)iconVariant;
- (id)initWithSize:(float)arg1 iconMode:(bool)arg2 badgeType:(unsigned long long)arg3;
- (id)initWithSize:(float)arg1 iconMode:(bool)arg2 badgeType:(unsigned long long)arg3 externalGeneratorDataHash:(unsigned long long)arg4;
- (id)initWithThumbnailRequest:(id)arg1;
- (int)interpolationQuality;
- (bool)isEqual:(id)arg1;
- (void)setExternalGeneratorDataHash:(unsigned long long)arg1;
- (void)setIconVariant:(long long)arg1;
- (void)setInterpolationQuality:(int)arg1;
- (float)size;

@end
