
@interface MRPlaybackSessionResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) MRPlaybackSession *playbackSession;

- (id)initWithPlaybackSession:(id)arg1;
- (id)playbackSession;
- (unsigned long long)type;

@end
