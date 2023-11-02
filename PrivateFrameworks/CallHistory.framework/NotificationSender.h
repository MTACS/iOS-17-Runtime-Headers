
@interface NotificationSender : NSObject {
    NSString * _name;
    NSDictionary * _userInfo;
}

@property (readonly) NSString *name;
@property (retain) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
