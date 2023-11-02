
@interface MPLeaveSharedPlaybackSessionCommandEvent : MPRemoteCommandEvent {
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)sessionIdentifier;

@end
