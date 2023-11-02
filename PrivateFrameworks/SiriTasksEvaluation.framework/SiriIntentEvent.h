
@interface SiriIntentEvent : NSObject {
    NSDate * _createdAt;
    NSData * _eventData;
    long long  _eventType;
    NSString * _intentId;
}

@property (nonatomic, readonly, copy) NSDate *createdAt;
@property (nonatomic, readonly) NSData *eventData;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSString *intentId;

- (void).cxx_destruct;
- (id)createdAt;
- (id)eventData;
- (long long)eventType;
- (id)initWithIntentId:(id)arg1 eventType:(long long)arg2 eventData:(id)arg3 createdAt:(id)arg4;
- (id)intentId;

@end
