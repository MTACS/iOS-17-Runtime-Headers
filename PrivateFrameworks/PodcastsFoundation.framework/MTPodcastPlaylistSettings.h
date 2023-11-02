
@interface MTPodcastPlaylistSettings : NSManagedObject

@property (nonatomic) int downloaded;
@property (nonatomic) double earliestEpisodeAvailabilityDate;
@property (nonatomic) long long episodeCount;
@property (nonatomic, retain) NSOrderedSet *episodes;
@property (nonatomic) long long episodesToShow;
@property (nonatomic) long long flags;
@property (nonatomic) double latestEpisodeAvailabilityDate;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long playOrder;
@property (nonatomic, retain) MTPlaylist *playlist;
@property (nonatomic, retain) MTPlaylist *playlistIfDefault;
@property (nonatomic, retain) MTPodcast *podcast;
@property (nonatomic) bool showPlayedEpisodes;
@property (nonatomic) long long sortOrder;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) bool visible;

// Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit

+ (id)predicateForPlaylistSettingsUuid:(id)arg1;

- (bool)needsUpdate;
- (void)setNeedsUpdate:(bool)arg1;

@end
