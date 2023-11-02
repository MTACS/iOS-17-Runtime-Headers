
@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SAMPMediaItem *mediaItem;
@property (nonatomic, copy) NSNumber *startPlaying;
@property (nonatomic, copy) NSString *upNextQueueInsertLocation;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)geniusSummon;
+ (id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (id)mediaItem;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setStartPlaying:(id)arg1;
- (void)setUpNextQueueInsertLocation:(id)arg1;
- (id)startPlaying;
- (id)upNextQueueInsertLocation;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
