
@interface VKNavigationPuckLocationTracingEvent : NSObject {
    long long  _eventType;
    NSUUID * _locationUUID;
    double  _timestamp;
}

@property (nonatomic, readonly) NSUUID *locationUUID;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)initWithEventType:(long long)arg1 timestamp:(double)arg2 locationUUID:(id)arg3;
- (id)locationUUID;
- (double)timestamp;
- (long long)type;

@end
