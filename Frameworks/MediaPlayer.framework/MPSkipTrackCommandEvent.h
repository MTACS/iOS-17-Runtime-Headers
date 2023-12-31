
@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent {
    bool  _requestingDefermentToPlaybackQueuePosition;
}

@property (getter=isRequestingDefermentToPlaybackQueuePosition, nonatomic, readonly) bool requestingDefermentToPlaybackQueuePosition;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)isRequestingDefermentToPlaybackQueuePosition;

@end
