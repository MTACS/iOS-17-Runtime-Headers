
@interface HMDBulletinNotificationLogEvent : HMMLogEvent {
    NSString * _topic;
}

@property (nonatomic, readonly) NSString *topic;

- (void).cxx_destruct;
- (id)initWithTopic:(long long)arg1;
- (id)topic;

@end
