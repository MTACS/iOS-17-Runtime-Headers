
@interface IDSCKNotification : NSObject {
    long long  _notificationType;
    NSString * _subscriptionID;
}

@property (nonatomic, readonly) long long notificationType;
@property (nonatomic, readonly, copy) NSString *subscriptionID;

+ (Class)__class;
+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;

- (void).cxx_destruct;
- (long long)notificationType;
- (id)subscriptionID;

@end
