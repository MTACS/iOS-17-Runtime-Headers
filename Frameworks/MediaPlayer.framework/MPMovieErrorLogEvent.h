
@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEvent * _event;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *errorComment;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) long long errorStatusCode;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSString *serverAddress;

- (void).cxx_destruct;
- (id)URI;
- (id)_initWithAVItemErrorLogEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)errorComment;
- (id)errorDomain;
- (long long)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;

@end
