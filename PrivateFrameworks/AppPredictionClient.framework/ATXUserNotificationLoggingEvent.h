
@interface ATXUserNotificationLoggingEvent : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, ATXTimedEventProtocol, BMStoreData, NSSecureCoding> {
    unsigned long long  _deliveryReason;
    long long  _eventType;
    NSUUID * _modeUUID;
    ATXUserNotification * _notification;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deliveryReason;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *modeUUID;
@property (nonatomic, readonly) ATXUserNotification *notification;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (unsigned long long)deliveryReason;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (bool)eventCausesNotificationInactivity;
- (bool)eventCausesNotificationNonprominence;
- (long long)eventType;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)initFromUserNotification:(id)arg1 eventType:(long long)arg2 timestamp:(double)arg3;
- (id)initFromUserNotification:(id)arg1 eventType:(long long)arg2 timestamp:(double)arg3 deliveryReason:(unsigned long long)arg4;
- (id)initFromUserNotification:(id)arg1 eventType:(long long)arg2 timestamp:(double)arg3 deliveryReason:(unsigned long long)arg4 modeUUID:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUserNotificationLoggingEvent:(id)arg1;
- (bool)isReceiveEvent;
- (id)json;
- (id)jsonRepresentation;
- (id)modeUUID;
- (id)notification;
- (id)proto;
- (id)serialize;
- (double)timestamp;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)eventTime;

@end
