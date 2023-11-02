
@interface SAMPMusicPlaybackImminent : SADomainCommand

@property (nonatomic, copy) NSString *preloadedUserSharedUserId;

+ (id)musicPlaybackImminent;
+ (id)musicPlaybackImminentWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)preloadedUserSharedUserId;
- (bool)requiresResponse;
- (void)setPreloadedUserSharedUserId:(id)arg1;

@end
