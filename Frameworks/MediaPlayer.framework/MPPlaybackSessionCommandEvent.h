
@interface MPPlaybackSessionCommandEvent : MPRemoteCommandEvent {
    NSString * _identifier;
    long long  _priority;
    NSString * _revision;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSString *revision;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (long long)priority;
- (id)revision;

@end
