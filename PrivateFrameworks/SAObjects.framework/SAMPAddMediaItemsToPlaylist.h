
@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *influencedUserSharedUserId;
@property (nonatomic, copy) NSString *insertLocation;
@property (nonatomic, copy) NSArray *mediaItems;
@property (nonatomic, retain) SAMPPlaylist *playlist;

+ (id)addMediaItemsToPlaylist;
+ (id)addMediaItemsToPlaylistWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)influencedUserSharedUserId;
- (id)insertLocation;
- (id)mediaItems;
- (id)playlist;
- (bool)requiresResponse;
- (void)setInfluencedUserSharedUserId:(id)arg1;
- (void)setInsertLocation:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setPlaylist:(id)arg1;

@end
