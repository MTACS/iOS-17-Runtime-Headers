
@interface CALNNotificationRecordResponse : NSObject {
    NSString * _actionIdentifier;
    CALNNotificationRecord * _notificationRecord;
    NSString * _originIdentifier;
    BSServiceConnectionEndpoint * _targetConnectionEndpoint;
}

@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, readonly) CALNNotificationRecord *notificationRecord;
@property (nonatomic, readonly, copy) NSString *originIdentifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (id)responseWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)description;
- (id)initWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;
- (id)notificationRecord;
- (id)originIdentifier;
- (id)targetConnectionEndpoint;

@end
