
@interface MPSetPlaybackSessionCommandEvent : MPRemoteCommandEvent {
    NSString * _identifier;
    NSData * _playbackSessionData;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *playbackSessionData;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)playbackSessionData;
- (id)type;

@end
