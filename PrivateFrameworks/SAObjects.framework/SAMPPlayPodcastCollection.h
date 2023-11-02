
@interface SAMPPlayPodcastCollection : SADomainCommand

@property (nonatomic, copy) NSString *assetInfo;
@property (nonatomic, copy) NSString *episodePlaybackOrder;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SAMPPodcastCollection *podcastCollection;
@property (nonatomic, copy) NSString *requesterSharedUserId;
@property (nonatomic, copy) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) bool startPlaying;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playPodcastCollection;
+ (id)playPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)assetInfo;
- (id)encodedClassName;
- (id)episodePlaybackOrder;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (id)podcastCollection;
- (id)requesterSharedUserId;
- (bool)requiresResponse;
- (void)setAssetInfo:(id)arg1;
- (void)setEpisodePlaybackOrder:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setPodcastCollection:(id)arg1;
- (void)setRequesterSharedUserId:(id)arg1;
- (void)setSharedUserIdFromPlayableITunesAccount:(id)arg1;
- (void)setStartPlaying:(bool)arg1;
- (id)sharedUserIdFromPlayableITunesAccount;
- (bool)startPlaying;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
