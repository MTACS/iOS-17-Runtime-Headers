
@interface TPSAnalyticsEventNotificationPosted : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _contentID;
    NSString * _correlationID;
    NSString * _errorCode;
    bool  _landingPage;
    NSNumber * _posted;
    NSNumber * _remaining;
}

@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *correlationID;
@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, readonly) bool landingPage;
@property (nonatomic, readonly) NSNumber *notificationsPosted;

+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 remainingNotificationsCount:(id)arg4 errorCode:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 correlationID:(id)arg3 remainingNotificationsCount:(id)arg4 errorCode:(id)arg5;
- (id)collectionID;
- (id)contentID;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCode;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (bool)landingPage;
- (id)mutableAnalyticsEventRepresentation;
- (id)notificationsPosted;
- (void)persistKeys;
- (void)setCollectionID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setCorrelationID:(id)arg1;
- (void)setErrorCode:(id)arg1;

@end
