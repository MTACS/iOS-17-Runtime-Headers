
@interface VUIFamilySharingEntity : NSObject {
    NSString * _artworkURL;
    NSSet * _capabilities;
    VUIContentRating * _contentRating;
    NSNumber * _episodeNumber;
    NSString * _genreTitle;
    NSString * _iTunesExtrasUrl;
    NSString * _identifier;
    WLKOfferListing * _offerListing;
    WLKOfferListing * _personalizedOfferListing;
    NSString * _previewArtworkURL;
    VUIFamilySharingRelationships * _relationships;
    NSDate * _releaseDate;
    NSNumber * _seasonNumber;
    NSString * _showTitle;
    NSString * _standardDescription;
    NSString * _title;
    VUIMediaEntityType * _type;
}

@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic, retain) NSSet *capabilities;
@property (nonatomic, retain) VUIContentRating *contentRating;
@property (nonatomic, retain) NSNumber *episodeNumber;
@property (nonatomic, retain) NSString *genreTitle;
@property (nonatomic, retain) NSString *iTunesExtrasUrl;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) WLKOfferListing *offerListing;
@property (nonatomic, retain) WLKOfferListing *personalizedOfferListing;
@property (nonatomic, retain) NSString *previewArtworkURL;
@property (nonatomic, retain) VUIFamilySharingRelationships *relationships;
@property (nonatomic, retain) NSDate *releaseDate;
@property (nonatomic, retain) NSNumber *seasonNumber;
@property (nonatomic, retain) NSString *showTitle;
@property (nonatomic, retain) NSString *standardDescription;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) VUIMediaEntityType *type;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)capabilities;
- (id)contentRating;
- (id)episodeNumber;
- (id)genreTitle;
- (id)iTunesExtrasUrl;
- (id)identifier;
- (id)offerListing;
- (id)personalizedOfferListing;
- (id)previewArtworkURL;
- (id)relationships;
- (id)releaseDate;
- (id)seasonNumber;
- (void)setArtworkURL:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setEpisodeNumber:(id)arg1;
- (void)setGenreTitle:(id)arg1;
- (void)setITunesExtrasUrl:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOfferListing:(id)arg1;
- (void)setPersonalizedOfferListing:(id)arg1;
- (void)setPreviewArtworkURL:(id)arg1;
- (void)setRelationships:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSeasonNumber:(id)arg1;
- (void)setShowTitle:(id)arg1;
- (void)setStandardDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)showTitle;
- (id)standardDescription;
- (id)title;
- (id)type;

@end
