
@interface POUtilities : NSObject

+ (void)_resolveWithDestination:(id)arg1 hashedRouteIdentifiers:(id)arg2 decodedRouteIdentifiers:(id)arg3 originatingOutputDeviceUID:(id)arg4 localPlaybackPermitted:(bool)arg5 audioRoutingInfo:(struct { bool x1; bool x2; bool x3; bool x4; })arg6 completion:(id /* block */)arg7;
+ (bool)assistantErrorIsInformational:(id)arg1;
+ (id)commandStatusForRemoteStatus:(unsigned int)arg1 error:(id)arg2 isRemoteStorePlayback:(bool)arg3;
+ (struct _MRSystemAppPlaybackQueue { }*)createPlaybackQueueFromRequestIdentifiers:(id)arg1 startPlaying:(bool)arg2 assetInfo:(id)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5;
+ (bool)errorIsApplicationRequiresPreflight:(id)arg1;
+ (bool)errorIsMaxStreamCount:(id)arg1;
+ (bool)errorIsNoNetwork:(id)arg1;
+ (id)identifierFromDomainObject:(id)arg1;
+ (bool)isPodcastsNowPlaying;
+ (void)modifyContextForAirplay:(id)arg1 andPlayLocally:(id)arg2 completion:(id /* block */)arg3;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 decodedRouteUIDs:(id)arg3 originatingOutputDeviceUID:(id)arg4 startPlaying:(bool)arg5 requesterSharedUserId:(id)arg6 sharedUserIdFromPlayableITunesAccount:(id)arg7 context:(id)arg8 allowsFallback:(bool)arg9 completion:(id /* block */)arg10;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 hashedRouteUIDs:(id)arg3 decodedRouteUIDs:(id)arg4 originatingOutputDeviceUID:(id)arg5 startPlaying:(bool)arg6 requesterSharedUserId:(id)arg7 sharedUserIdFromPlayableITunesAccount:(id)arg8 context:(id)arg9 allowsFallback:(bool)arg10 completion:(id /* block */)arg11;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 hashedRouteUIDs:(id)arg3 startPlaying:(bool)arg4 requesterSharedUserId:(id)arg5 sharedUserIdFromPlayableITunesAccount:(id)arg6 context:(id)arg7 allowsFallback:(bool)arg8 completion:(id /* block */)arg9;
+ (void)performPodcastsPlaybackRequestWithIdentifier:(id)arg1 assetInfo:(id)arg2 hashedRouteUIDs:(id)arg3 startPlaying:(bool)arg4 requesterSharedUserId:(id)arg5 sharedUserIdFromPlayableITunesAccount:(id)arg6 context:(id)arg7 completion:(id /* block */)arg8;
+ (void)setPlaybackRate:(float)arg1 failureErrorCode:(long long)arg2 completion:(id /* block */)arg3;
+ (id)typeFromDomainObject:(id)arg1;

@end
