
@protocol INPlayMediaIntentExport <NSObject, JSExport>

@required

- (NSArray *)alternativeResults;
- (NSArray *)audioSearchResults;
- (NSArray *)buckets;
- (NSDate *)expirationDate;
- (NSArray *)hashedRouteUIDs;
- (id)init;
- (INMediaItem *)mediaContainer;
- (NSArray *)mediaItems;
- (INMediaSearch *)mediaSearch;
- (long long)parsecCategory;
- (NSNumber *)playShuffled;
- (long long)playbackQueueLocation;
- (long long)playbackRepeatMode;
- (NSNumber *)playbackSpeed;
- (INPrivatePlayMediaIntentData *)privatePlayMediaIntentData;
- (NSString *)proxiedBundleIdentifier;
- (NSString *)recoID;
- (NSNumber *)resumePlayback;
- (void)setAlternativeResults:(NSArray *)arg1;
- (void)setAudioSearchResults:(NSArray *)arg1;
- (void)setBuckets:(NSArray *)arg1;
- (void)setExpirationDate:(NSDate *)arg1;
- (void)setHashedRouteUIDs:(NSArray *)arg1;
- (void)setMediaContainer:(INMediaItem *)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setMediaSearch:(INMediaSearch *)arg1;
- (void)setParsecCategory:(long long)arg1;
- (void)setPlayShuffled:(NSNumber *)arg1;
- (void)setPlaybackQueueLocation:(long long)arg1;
- (void)setPlaybackRepeatMode:(long long)arg1;
- (void)setPlaybackSpeed:(NSNumber *)arg1;
- (void)setPrivatePlayMediaIntentData:(INPrivatePlayMediaIntentData *)arg1;
- (void)setProxiedBundleIdentifier:(NSString *)arg1;
- (void)setRecoID:(NSString *)arg1;
- (void)setResumePlayback:(NSNumber *)arg1;

@end
