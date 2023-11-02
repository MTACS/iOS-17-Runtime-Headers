
@interface PXAppleMusicPreviewAsset : NSObject <PXAppleMusicAssetProperties, PXAudioAsset, PXStorySongResource> {
    PXAppleMusicAsset * _originalAsset;
}

@property (nonatomic, readonly, copy) NSString *albumTitle;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly) <PXDisplayAsset> *artworkDisplayAsset;
@property (nonatomic, readonly, copy) NSString *assetTagsDescription;
@property (nonatomic, readonly) Class audioSessionClass;
@property (nonatomic, readonly) long long catalog;
@property (nonatomic, readonly, copy) NSString *colorGradeCategory;
@property (nonatomic, readonly) <PXAudioCueSource> *cueSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) Class defaultMediaProviderClass;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly, copy) NSArray *entryPoints;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } exportableDuration;
@property (nonatomic, readonly) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSNumber *loudnessMainPeak;
@property (nonatomic, readonly, copy) NSNumber *loudnessMainValue;
@property (nonatomic, readonly) PXAppleMusicAsset *originalAsset;
@property (nonatomic, readonly) long long pace;
@property (nonatomic, readonly) <PXAudioAsset> *previewAudioAsset;
@property (nonatomic, readonly) NSString *px_storyResourceIdentifier;
@property (nonatomic, readonly) long long px_storyResourceKind;
@property (nonatomic, readonly) <PXAudioAsset> *px_storyResourceSongAsset;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (struct { long long x1; int x2; unsigned int x3; long long x4; })previewClipDuration;

- (void).cxx_destruct;
- (Class)audioSessionClass;
- (long long)catalog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exportableDuration;
- (unsigned long long)flags;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithOriginalAsset:(id)arg1;
- (bool)isAudioEqualToAsset:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originalAsset;
- (id)previewAudioAsset;
- (id)px_storyResourceIdentifier;
- (long long)px_storyResourceKind;
- (id)px_storyResourceSongAsset;

@end
