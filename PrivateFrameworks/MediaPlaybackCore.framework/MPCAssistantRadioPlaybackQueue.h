
@interface MPCAssistantRadioPlaybackQueue : MPCAssistantPlaybackQueue {
    NSString * _stationStringID;
}

@property (nonatomic, readonly) NSString *stationStringID;

+ (id)radioQueueWithContextID:(id)arg1 stationStringID:(id)arg2;

- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue { }*)createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 stationStringID:(id)arg2;
- (id)stationStringID;

@end
