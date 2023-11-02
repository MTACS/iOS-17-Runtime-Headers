
@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEventInternal * _playerItemErrorLogEvent;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *errorComment;
@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, readonly) long long errorStatusCode;
@property (nonatomic, readonly, copy) NSString *hf_prettyDescription;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSString *serverAddress;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

- (id)URI;
- (id)_common_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)errorComment;
- (id)errorDomain;
- (long long)errorStatusCode;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)playbackSessionID;
- (id)serverAddress;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescription;

@end
