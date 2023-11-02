
@interface CRKPostUserNotificationRequest : CATTaskRequest {
    long long  _notificationType;
}

@property (nonatomic) long long notificationType;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)notificationType;
- (void)setNotificationType:(long long)arg1;

@end
