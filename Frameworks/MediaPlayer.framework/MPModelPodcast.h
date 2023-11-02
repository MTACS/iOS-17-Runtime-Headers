
@interface MPModelPodcast : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, retain) MPModelPodcastAuthor *author;
@property (nonatomic, copy) NSURL *feedURL;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, readonly) long long sortType;
@property (nonatomic) bool supportsSubscription;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)__MPModelPropertyPodcastArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastFeedURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastShareURL__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastSortType__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastSupportsSubscription__MAPPING_MISSING__;
+ (void)__MPModelPropertyPodcastTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipPodcastAuthor__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__author_KEY;
+ (id)__feedURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__sortType_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__title_KEY;
+ (long long)genericObjectType;
+ (id)kindWithEpisodeKind:(id)arg1;

- (id)artworkCatalog;
- (id)humanDescription;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredSectionPlaybackProperties;

@end
