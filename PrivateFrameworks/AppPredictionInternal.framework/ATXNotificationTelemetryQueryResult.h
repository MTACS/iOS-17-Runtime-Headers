
@interface ATXNotificationTelemetryQueryResult : NSObject {
    NSString * _bundleId;
    long long  _deliveryMethod;
    NSString * _destinationReason;
    NSString * _finalDestination;
    bool  _isMessage;
    NSUUID * _notificationUUID;
    NSString * _originalDestination;
    NSString * _receiveModeIdentifier;
    NSDate * _receiveTimestamp;
    ATXUserNotificationResolution * _resolution;
    long long  _urgency;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic) long long deliveryMethod;
@property (nonatomic, retain) NSString *destinationReason;
@property (nonatomic, retain) NSString *finalDestination;
@property (nonatomic) bool isMessage;
@property (nonatomic, retain) NSUUID *notificationUUID;
@property (nonatomic, retain) NSString *originalDestination;
@property (nonatomic, retain) NSString *receiveModeIdentifier;
@property (nonatomic, retain) NSDate *receiveTimestamp;
@property (nonatomic, retain) ATXUserNotificationResolution *resolution;
@property (nonatomic) long long urgency;

- (void).cxx_destruct;
- (id)bundleId;
- (long long)deliveryMethod;
- (id)destinationReason;
- (id)finalDestination;
- (bool)isMessage;
- (id)notificationUUID;
- (id)originalDestination;
- (id)receiveModeIdentifier;
- (id)receiveTimestamp;
- (id)resolution;
- (void)setBundleId:(id)arg1;
- (void)setDeliveryMethod:(long long)arg1;
- (void)setDestinationReason:(id)arg1;
- (void)setFinalDestination:(id)arg1;
- (void)setIsMessage:(bool)arg1;
- (void)setNotificationUUID:(id)arg1;
- (void)setOriginalDestination:(id)arg1;
- (void)setReceiveModeIdentifier:(id)arg1;
- (void)setReceiveTimestamp:(id)arg1;
- (void)setResolution:(id)arg1;
- (void)setUrgency:(long long)arg1;
- (long long)urgency;

@end
