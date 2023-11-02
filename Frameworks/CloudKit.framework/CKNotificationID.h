
@interface CKNotificationID : NSObject <CKXPCSuitableString, NSCopying, NSSecureCoding> {
    NSString * _notificationUUID;
}

@property (nonatomic, readonly, copy) NSString *notificationUUID;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKXPCSuitableString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)notificationUUID;

@end
