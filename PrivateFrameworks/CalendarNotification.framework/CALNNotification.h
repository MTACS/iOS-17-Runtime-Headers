
@interface CALNNotification : NSObject <NSSecureCoding> {
    NSDate * _date;
    CALNNotificationRequest * _request;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) CALNNotificationRequest *request;

+ (id)notificationWithRequest:(id)arg1 date:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNotification:(id)arg1;
- (id)request;

@end
