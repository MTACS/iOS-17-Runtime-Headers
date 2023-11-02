
@interface ASUserNotificationResponse : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActionIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)userInfo;

@end
