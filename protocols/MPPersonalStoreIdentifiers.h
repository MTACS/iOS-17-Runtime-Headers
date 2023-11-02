
@protocol MPPersonalStoreIdentifiers <NSObject>

@required

- (NSString *)cloudAlbumID;
- (NSString *)cloudArtistID;
- (unsigned long long)cloudID;
- (NSString *)personID;
- (NSString *)playbackAuthorizationToken;
- (NSString *)recommendationID;

@end
