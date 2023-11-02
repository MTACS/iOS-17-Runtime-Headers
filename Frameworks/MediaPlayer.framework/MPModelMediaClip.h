
@interface MPModelMediaClip : MPModelObject

@property (nonatomic, copy) id /* block */ previewArtworkCatalogBlock;
@property (nonatomic, copy) NSArray *staticAssets;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyMediaClipPreviewArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyMediaClipTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMediaClipStaticAssets__MAPPING_MISSING__;
+ (id)__previewArtworkCatalogBlock_KEY;
+ (id)__staticAssets_KEY;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;
+ (long long)genericObjectType;
+ (id)kind;

- (id)humanDescription;
- (id)previewArtworkCatalog;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

@end
