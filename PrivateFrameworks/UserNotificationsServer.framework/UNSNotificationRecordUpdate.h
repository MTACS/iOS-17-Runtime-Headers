
@interface UNSNotificationRecordUpdate : NSObject {
    UNSNotificationRecord * _notificationRecord;
}

@property (nonatomic, readonly) UNSNotificationRecord *notificationRecord;

- (void).cxx_destruct;
- (id)_initWithNotificationRecord:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)notificationRecord;

@end
