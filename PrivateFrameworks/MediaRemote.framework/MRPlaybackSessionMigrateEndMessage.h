
@interface MRPlaybackSessionMigrateEndMessage : MRProtocolMessage

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) MRPlaybackSessionRequest *request;

- (id)error;
- (id)initWithRequest:(id)arg1 error:(id)arg2 playerPath:(id)arg3;
- (id)playerPath;
- (id)request;
- (unsigned long long)type;

@end
