
@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage

@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) MRPlaybackSessionRequest *request;

- (id)initWithRequest:(id)arg1 playerPath:(id)arg2;
- (id)playerPath;
- (id)request;
- (unsigned long long)type;

@end
