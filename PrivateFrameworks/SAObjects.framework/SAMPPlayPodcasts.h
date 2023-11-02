
@interface SAMPPlayPodcasts : SADomainCommand

@property (nonatomic, copy) NSString *episodePlaybackOrder;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSString *requesterSharedUserId;
@property (nonatomic, copy) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) bool startPlaying;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playPodcasts;
+ (id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)episodePlaybackOrder;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (id)requesterSharedUserId;
- (bool)requiresResponse;
- (void)setEpisodePlaybackOrder:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setRequesterSharedUserId:(id)arg1;
- (void)setSharedUserIdFromPlayableITunesAccount:(id)arg1;
- (void)setStartPlaying:(bool)arg1;
- (id)sharedUserIdFromPlayableITunesAccount;
- (bool)startPlaying;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
