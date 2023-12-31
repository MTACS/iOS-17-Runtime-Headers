
@interface WBSHistoryNotification : NSObject <NSSecureCoding> {
    NSString * _name;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 userInfo:(id)arg2;
- (id)name;
- (id)userInfo;

@end
