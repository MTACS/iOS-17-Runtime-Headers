
@interface MRPlaybackSessionMigrateRequestMessage : MRProtocolMessage

@property (nonatomic, readonly) MRPlaybackSession *playbackSession;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) MRPlaybackSessionMigrateRequest *request;

- (id)initWithPlaybackSession:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3;
- (id)playbackSession;
- (id)playerPath;
- (id)request;
- (unsigned long long)type;

@end
