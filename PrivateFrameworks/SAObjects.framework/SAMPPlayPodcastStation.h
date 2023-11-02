
@interface SAMPPlayPodcastStation : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSString *requesterSharedUserId;
@property (nonatomic, copy) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) bool startPlaying;
@property (nonatomic, retain) SAMPPodcastStation *station;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playPodcastStation;
+ (id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (id)requesterSharedUserId;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setRequesterSharedUserId:(id)arg1;
- (void)setSharedUserIdFromPlayableITunesAccount:(id)arg1;
- (void)setStartPlaying:(bool)arg1;
- (void)setStation:(id)arg1;
- (id)sharedUserIdFromPlayableITunesAccount;
- (bool)startPlaying;
- (id)station;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
