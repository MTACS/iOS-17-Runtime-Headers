
@interface MPPrepareForSetPlaybackQueueCommandEvent : MPRemoteCommandEvent {
    bool  _isProactive;
    NSString * _proactiveReason;
}

@property (nonatomic, readonly) bool isProactive;
@property (nonatomic, readonly, copy) NSString *proactiveReason;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (bool)isProactive;
- (id)proactiveReason;

@end
