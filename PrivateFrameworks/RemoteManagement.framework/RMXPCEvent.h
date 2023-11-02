
@interface RMXPCEvent : NSObject <NSCopying> {
    NSDictionary * _descriptor;
    NSString * _notificationName;
    NSString * _streamName;
}

@property (nonatomic, readonly) NSDictionary *descriptor;
@property (nonatomic, readonly) NSString *eventKey;
@property (nonatomic, readonly) NSString *notificationName;
@property (nonatomic, readonly) NSString *streamName;

+ (id)eventKeyForStream:(id)arg1 notificationName:(id)arg2;
+ (id)newXPCEventForDarwinNotification:(id)arg1;
+ (id)newXPCEventForDistributedNotification:(id)arg1;
+ (id)newXPCEventForStream:(id)arg1 notificationName:(id)arg2 descriptor:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptor;
- (id)eventKey;
- (unsigned long long)hash;
- (id)initWithStreamName:(id)arg1 notificationName:(id)arg2 descriptor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEvent:(id)arg1;
- (id)notificationName;
- (id)streamName;

@end
