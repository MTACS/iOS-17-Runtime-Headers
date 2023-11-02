
@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *influencedUserSharedUserId;
@property (nonatomic, retain) SAMPCollection *mediaItems;

+ (id)addMediaItemsToLibrary;
+ (id)addMediaItemsToLibraryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)influencedUserSharedUserId;
- (id)mediaItems;
- (bool)requiresResponse;
- (void)setInfluencedUserSharedUserId:(id)arg1;
- (void)setMediaItems:(id)arg1;

@end
