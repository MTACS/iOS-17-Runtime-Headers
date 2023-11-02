
@protocol UITextInteractionAssertion <NSObject>

@required

- (void)invalidate;
- (NSString *)reason;
- (void)setUserInfo:(NSDictionary *)arg1;
- (NSDictionary *)userInfo;

@end
