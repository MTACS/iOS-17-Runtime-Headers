
@protocol PXAudioAsset <NSObject, NSCopying>

@required

- (NSString *)albumTitle;
- (NSString *)artistName;
- (<PXDisplayAsset> *)artworkDisplayAsset;
- (NSString *)assetTagsDescription;
- (Class)audioSessionClass;
- (long long)catalog;
- (NSString *)colorGradeCategory;
- (Class)defaultMediaProviderClass;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (NSArray *)entryPoints;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exportableDuration;
- (unsigned long long)flags;
- (NSString *)identifier;
- (bool)isAudioEqualToAsset:(id <PXAudioAsset>)arg1;
- (long long)pace;
- (<PXAudioAsset> *)previewAudioAsset;
- (NSString *)subtitle;
- (NSString *)title;

@end
