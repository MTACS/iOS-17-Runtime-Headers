
@interface CALNNotificationSound : NSObject <NSCopying, NSSecureCoding> {
    NSString * _alertTopic;
    long long  _alertType;
}

@property (nonatomic, readonly, copy) NSString *alertTopic;
@property (nonatomic, readonly) long long alertType;

+ (id)soundWithAlertType:(long long)arg1 alertTopic:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAlertType:(long long)arg1 alertTopic:(id)arg2;
- (id)alertTopic;
- (long long)alertType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSound:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
