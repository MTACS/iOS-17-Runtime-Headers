
@protocol CPListTemplateItem <NSObject>

@required

- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (NSString *)text;
- (id)userInfo;

@end
