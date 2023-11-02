
@interface MTMPCAssistantGenericPlaybackQueue : MPCAssistantPlaybackQueue {
    struct _MRSystemAppPlaybackQueue { } * _playbackQueueRef;
}

@property (nonatomic) struct _MRSystemAppPlaybackQueue { }*playbackQueueRef;

- (struct _MRSystemAppPlaybackQueue { }*)createRemotePlaybackQueue;
- (id)initWithContextID:(id)arg1 playbackQueueRef:(struct _MRSystemAppPlaybackQueue { }*)arg2;
- (id)initWithPlaybackQueueRef:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)playbackQueueRef;
- (void)setPlaybackQueueRef:(struct _MRSystemAppPlaybackQueue { }*)arg1;

@end
