
@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) MRPlaybackSessionMigrateRequest *request;

- (id)initWithRequest:(id)arg1;
- (id)request;
- (unsigned long long)type;

@end
