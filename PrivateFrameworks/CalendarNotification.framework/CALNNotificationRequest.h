
@interface CALNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {
    CALNNotificationContent * _content;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) CALNNotificationContent *content;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;

@end
