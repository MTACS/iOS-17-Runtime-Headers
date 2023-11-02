
@interface CALNUNNotificationResponseMapper : NSObject {
    CALNUNNotificationMapper * _notificationMapper;
}

@property (nonatomic, readonly) CALNUNNotificationMapper *notificationMapper;

+ (id)_calnNotificationActionIdentifierFromUNNotificationActionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)calnNotificationResponseFromUNNotificationResponse:(id)arg1;
- (id)initWithNotificationMapper:(id)arg1;
- (id)notificationMapper;

@end
