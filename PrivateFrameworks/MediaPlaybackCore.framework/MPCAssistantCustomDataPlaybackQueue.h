
@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue {
    NSData * _customData;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSData *customData;
@property (nonatomic, readonly) NSString *identifier;

+ (id)customDataQueueWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;

- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue { }*)createRemotePlaybackQueue;
- (id)customData;
- (id)description;
- (id)identifier;
- (id)initWithContextID:(id)arg1 identifier:(id)arg2 customData:(id)arg3;

@end
