
@interface SFUnifiedTabBarItemTitleContainerViewTheme : NSObject {
    UIColor * _overrideTintColor;
    UIColor * _placeholderTextColor;
    UIColor * _primaryTextColor;
    UIColor * _secondaryTextColor;
    UIColor * _themeColor;
}

@property (nonatomic, readonly) UIColor *overrideTintColor;
@property (nonatomic, readonly) UIColor *placeholderTextColor;
@property (nonatomic, readonly) UIColor *primaryTextColor;
@property (nonatomic, readonly) UIColor *secondaryTextColor;
@property (nonatomic, readonly) UIColor *themeColor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPrimaryTextColor:(id)arg1 secondaryTextColor:(id)arg2 placeholderTextColor:(id)arg3;
- (id)initWithPrimaryTextColor:(id)arg1 secondaryTextColor:(id)arg2 placeholderTextColor:(id)arg3 overrideTintColor:(id)arg4 themeColor:(id)arg5;
- (id)overrideTintColor;
- (id)placeholderTextColor;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)themeColor;

@end
