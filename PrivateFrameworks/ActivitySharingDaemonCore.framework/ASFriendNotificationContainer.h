
@interface ASFriendNotificationContainer : NSObject {
    NSString * _friendUUID;
    UNNotificationRequest * _notificationRequest;
    long long  _notificationRequestType;
}

@property (nonatomic, readonly) NSString *friendUUID;
@property (nonatomic, readonly) UNNotificationRequest *notificationRequest;
@property (nonatomic, readonly) long long notificationRequestType;

+ (id)containerWithNotificationRequest:(id)arg1 friendUUID:(id)arg2 bulletinType:(long long)arg3;

- (void).cxx_destruct;
- (id)friendUUID;
- (id)initWithNotificationRequest:(id)arg1 friendUUID:(id)arg2 bulletinType:(long long)arg3;
- (id)notificationRequest;
- (long long)notificationRequestType;

@end
