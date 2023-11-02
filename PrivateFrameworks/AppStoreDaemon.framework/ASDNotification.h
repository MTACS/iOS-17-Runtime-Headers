
@interface ASDNotification : NSObject <NSSecureCoding> {
    NSString * _name;
    NSDictionary * _userInfo;
}

@property (readonly) NSString *name;
@property (readonly) NSDictionary *userInfo;

+ (id)notificationWithName:(id)arg1 userInfo:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (id)name;
- (id)userInfo;

@end
