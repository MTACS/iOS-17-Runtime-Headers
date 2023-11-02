
@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) long long nextItemCount;
@property (nonatomic, copy) NSNumber *preemptiveNowPlayingQueueDetailsTimeOut;
@property (nonatomic) long long previousItemCount;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)getNowPlayingQueueDetails;
+ (id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (long long)nextItemCount;
- (id)preemptiveNowPlayingQueueDetailsTimeOut;
- (long long)previousItemCount;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setNextItemCount:(long long)arg1;
- (void)setPreemptiveNowPlayingQueueDetailsTimeOut:(id)arg1;
- (void)setPreviousItemCount:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
