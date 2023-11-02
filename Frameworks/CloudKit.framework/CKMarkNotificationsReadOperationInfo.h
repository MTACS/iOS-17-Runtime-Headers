
@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo <NSSecureCoding> {
    NSArray * _notificationIDs;
}

@property (nonatomic, retain) NSArray *notificationIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)notificationIDs;
- (void)setNotificationIDs:(id)arg1;

@end
