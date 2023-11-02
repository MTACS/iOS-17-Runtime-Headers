
@interface MPModelTVShow : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) MPModelTVShowCreator *creator;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSString *shortTitle;
@property (nonatomic, copy) NSString *tagline;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyTVShowArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEpisodeCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowShortEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowShortTitle__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowTagline__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVShowCreator__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__creator_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__episodesCount_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__shortTitle_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)kindWithSeasonKind:(id)arg1;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)humanDescription;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredSectionPlaybackProperties;

@end
