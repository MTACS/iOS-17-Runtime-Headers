
@interface VUIFamilySharingMediaItem : VUIMediaItem {
    NSString * _artworkURL;
    NSObject<VUIMediaEntityAssetController> * _assetController;
    NSString * _buyParams;
    VUIFamilySharingEntity * _entity;
    VUIExtrasInfo * _iTunesExtrasInfo;
    NSString * _personalizedBuyParams;
    NSString * _previewArtworkURL;
    VUIFamilySharingRelationships * _relationships;
    VUIVideosPlayable * _videosPlayable;
}

@property (nonatomic, retain) NSString *artworkURL;
@property (nonatomic, retain) NSObject<VUIMediaEntityAssetController> *assetController;
@property (nonatomic, retain) NSString *buyParams;
@property (nonatomic, retain) VUIFamilySharingEntity *entity;
@property (nonatomic, retain) VUIExtrasInfo *iTunesExtrasInfo;
@property (nonatomic, retain) NSString *personalizedBuyParams;
@property (nonatomic, retain) NSString *previewArtworkURL;
@property (nonatomic, retain) VUIFamilySharingRelationships *relationships;
@property (nonatomic, retain) VUIVideosPlayable *videosPlayable;

- (void).cxx_destruct;
- (id)_bestOffer;
- (id)_bestRedownloadOffer;
- (id)_itunesExtrasDictionary;
- (id)artworkURL;
- (id)assetController;
- (id)audioCapability;
- (id)bookmark;
- (id)buyParams;
- (id)colorCapability;
- (id)contentDescription;
- (id)contentRating;
- (id)duration;
- (id)entity;
- (id)episodeNumber;
- (id)extrasURL;
- (id)genreTitle;
- (id)iTunesExtrasInfo;
- (id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2;
- (bool)isFamilySharingContent;
- (id)personalizedBuyParams;
- (id)previewArtworkURL;
- (id)relationships;
- (id)releaseDate;
- (id)releaseYear;
- (id)resolution;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)seasonNumber;
- (void)setArtworkURL:(id)arg1;
- (void)setAssetController:(id)arg1;
- (void)setBuyParams:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setITunesExtrasInfo:(id)arg1;
- (void)setPersonalizedBuyParams:(id)arg1;
- (void)setPreviewArtworkURL:(id)arg1;
- (void)setRelationships:(id)arg1;
- (void)setVideosPlayable:(id)arg1;
- (id)showCanonicalID;
- (id)showIdentifier;
- (id)showTitle;
- (id)storeID;
- (id)title;
- (id)videosPlayable;

@end
