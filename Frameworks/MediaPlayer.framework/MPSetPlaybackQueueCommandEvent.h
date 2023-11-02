
@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent {
    MPRemotePlaybackQueue * _playbackQueue;
    NSString * _sessionIdentifierOverride;
}

@property (nonatomic, readonly) MPRemotePlaybackQueue *playbackQueue;
@property (nonatomic, readonly) NSString *sessionIdentifierOverride;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCommand:(id)arg1 playbackQueue:(id)arg2;
- (id)playbackQueue;
- (id)sessionIdentifierOverride;

@end
