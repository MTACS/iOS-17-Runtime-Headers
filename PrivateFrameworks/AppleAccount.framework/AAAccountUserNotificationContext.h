
@interface AAAccountUserNotificationContext : NSObject <NSCopying, NSSecureCoding> {
    long long  _action;
    NSString * _altDSID;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic) long long action;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (void)setAction:(long long)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
