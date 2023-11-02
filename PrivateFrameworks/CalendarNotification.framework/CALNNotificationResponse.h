
@interface CALNNotificationResponse : NSObject {
    NSString * _actionIdentifier;
    CALNNotification * _notification;
    NSString * _originIdentifier;
    BSServiceConnectionEndpoint * _targetConnectionEndpoint;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly) CALNNotification *notification;
@property (nonatomic, readonly, copy) NSString *originIdentifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponse:(id)arg1;
- (id)notification;
- (id)originIdentifier;
- (id)targetConnectionEndpoint;

@end
