
@interface MPModelCreditsArtist : MPModelPerson

@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;

+ (void)__MPModelPropertyCreditsArtistArtwork__MAPPING_MISSING__;
+ (void)__MPModelRelationshipCreditsArtistRelatedArtist__MAPPING_MISSING__;
+ (id)__artist_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;

@end
