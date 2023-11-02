
@interface MPModelGenre : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, copy) NSString *name;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyGenreArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyGenreLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyGenreName__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__name_KEY;
+ (long long)genericObjectType;
+ (id)kindWithAlbumKind:(id)arg1;

- (id)artworkCatalog;
- (id)humanDescription;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredSectionPlaybackProperties;

@end
