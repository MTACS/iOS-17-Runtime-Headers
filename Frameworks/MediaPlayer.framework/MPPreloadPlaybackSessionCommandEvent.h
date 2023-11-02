
@interface MPPreloadPlaybackSessionCommandEvent : MPRemoteCommandEvent {
    NSString * _identifier;
    NSDictionary * _metadata;
    NSURL * _playbackSessionDataFilePath;
    long long  _priority;
    NSString * _revision;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) NSURL *playbackSessionDataFilePath;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSString *revision;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)metadata;
- (id)playbackSessionDataFilePath;
- (long long)priority;
- (id)revision;
- (id)type;

@end
