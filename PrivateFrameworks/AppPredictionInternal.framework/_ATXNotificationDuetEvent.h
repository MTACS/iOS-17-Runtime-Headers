
@interface _ATXNotificationDuetEvent : NSObject <ATXTimedEventProtocol> {
    NSString * _bundleId;
    NSDate * _eventTime;
    long long  _eventType;
    NSString * _notificationId;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventTime;
@property (nonatomic, readonly) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *notificationId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)bundleId;
- (id)eventTime;
- (long long)eventType;
- (id)init;
- (id)initWithBundleId:(id)arg1 notificationId:(id)arg2 eventTime:(id)arg3 timeZone:(id)arg4 eventType:(id)arg5;
- (bool)isAcceptEvent;
- (bool)isReceiveEvent;
- (bool)isRejectEvent;
- (id)notificationId;
- (id)prettyRepresentation;
- (id)timeZone;

@end
