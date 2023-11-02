
@interface HMDIncomingCloudPushLogEvent : HMMLogEvent {
    NSString * _topic;
}

@property (nonatomic, readonly) NSString *topic;

+ (id)incomingCloudPush:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTopic:(id)arg1;
- (id)topic;

@end
