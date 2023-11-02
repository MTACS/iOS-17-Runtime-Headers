
@protocol MPMutablePersonalStoreIdentifiers <MPPersonalStoreIdentifiers>

@required

- (NSString *)cloudAlbumID;
- (NSString *)cloudArtistID;
- (unsigned long long)cloudID;
- (NSString *)playbackAuthorizationToken;
- (NSString *)recommendationID;
- (void)setCloudAlbumID:(NSString *)arg1;
- (void)setCloudArtistID:(NSString *)arg1;
- (void)setCloudID:(unsigned long long)arg1;
- (void)setPlaybackAuthorizationToken:(NSString *)arg1;
- (void)setRecommendationID:(NSString *)arg1;

@end
