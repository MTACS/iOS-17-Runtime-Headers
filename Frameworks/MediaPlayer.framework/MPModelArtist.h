
@interface MPModelArtist : MPModelPerson

@property (nonatomic) long long albumCount;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (getter=isClassicalExperienceAvailable, nonatomic) bool classicalExperienceAvailable;
@property (nonatomic, copy) NSDate *dateFavorited;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic, copy) MPModelGenre *genre;
@property (nonatomic) bool hasBiography;
@property (nonatomic) bool isDisliked;
@property (nonatomic) bool isFavorite;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long songCount;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyArtistAlbumCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistClassicalExperienceAvailable__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistDateFavorited__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistHasBiography__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistIsDisliked__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistIsFavorite__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyArtistSongCount__MAPPING_MISSING__;
+ (void)__MPModelRelationshipArtistGenre__MAPPING_MISSING__;
+ (id)__albumCount_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__classicalExperienceAvailable_KEY;
+ (id)__dateFavorited_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__genre_KEY;
+ (id)__hasBiography_KEY;
+ (id)__isDisliked_KEY;
+ (id)__isFavorite_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__songCount_KEY;
+ (long long)genericObjectType;
+ (id)kindWithAlbumKind:(id)arg1;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredSectionPlaybackProperties;

- (id)mpc_radioContentReference;

@end
