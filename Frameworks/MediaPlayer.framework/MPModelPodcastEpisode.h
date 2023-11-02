
@interface MPModelPodcastEpisode : MPModelObject {
    NSString * _commentText;
}

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSDictionary *artworkInfo;
@property (nonatomic, copy) NSString *assetURL;
@property (nonatomic, retain) MPModelPodcastAuthor *author;
@property (nonatomic, copy) NSString *commentText;
@property (nonatomic, copy) NSDate *datePlayed;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic, readonly) long long episodeNumber;
@property (nonatomic, readonly) long long episodeType;
@property (getter=isExplicitEpisode, nonatomic) bool explicitEpisode;
@property (nonatomic, copy) NSString *externalContentID;
@property (nonatomic, copy) NSString *feedURL;
@property (nonatomic, readonly) bool hasVideo;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, retain) MPModelPodcast *podcast;
@property (nonatomic, copy) NSString *podcastStoreID;
@property (nonatomic, copy) NSString *priceType;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, readonly) long long seasonNumber;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSString *showArtworkTemplateURL;
@property (nonatomic, copy) NSString *state;
@property (nonatomic, copy) NSURL *streamURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyPodcastEpisodeArtworkInfo__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeAssetURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeDatePlayed__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeDescriptionText__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeDuration__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeExplicit__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeExternalContentID__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeFeedURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeHasVideo__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeItemType__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeMediaType__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeNumber__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodePodcastStoreID__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodePriceType__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeReleaseDateComponents__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeSeasonNumber__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeShareURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeShowArtworkTemplateURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeState__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeStreamURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeTitle__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeType__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastEpisodeUserRating__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPodcastEpisodeAuthor__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPodcastEpisodeLocalFileAsset__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPodcastEpisodePlaybackPosition__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPodcastEpisodePodcast__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__artworkInfo_KEY;
+ (id)__assetURL_KEY;
+ (id)__author_KEY;
+ (id)__datePlayed_KEY;
+ (id)__descriptionText_KEY;
+ (id)__duration_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeType_KEY;
+ (id)__explicitEpisode_KEY;
+ (id)__externalContentID_KEY;
+ (id)__feedURL_KEY;
+ (id)__hasVideo_KEY;
+ (id)__itemType_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__mediaType_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__podcastStoreID_KEY;
+ (id)__podcast_KEY;
+ (id)__priceType_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__seasonNumber_KEY;
+ (id)__shareURL_KEY;
+ (id)__showArtworkTemplateURL_KEY;
+ (id)__state_KEY;
+ (id)__streamURL_KEY;
+ (id)__title_KEY;
+ (id)__userRating_KEY;
+ (long long)genericObjectType;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)commentText;
- (id)humanDescription;
- (void)setCommentText:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;

@end
