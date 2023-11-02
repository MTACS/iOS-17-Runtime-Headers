
@protocol AMUISwitcherTransition <NSObject>

@required

- (long long)direction;
- (<AMUISwitcherItem> *)fromItem;
- (bool)isInteractive;
- (void)removeUserInfoObjectForKey:(NSString *)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(NSString *)arg2;
- (<AMUISwitcherItem> *)toItem;
- (id)userInfoObjectForKey:(NSString *)arg1;

@end
