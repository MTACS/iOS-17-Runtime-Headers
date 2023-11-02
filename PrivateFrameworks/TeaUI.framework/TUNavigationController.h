
@interface TUNavigationController : UINavigationController <UIViewControllerStatusBarPartStyleProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredCenterStatusBarStyle;
@property (nonatomic, readonly) long long preferredLeadingStatusBarStyle;
@property (nonatomic, readonly) long long preferredTrailingStatusBarStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long ts_preferredCenterStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredLeadingStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredTrailingStatusBarStyle;

- (long long)convert:(long long)arg1;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;
- (long long)preferredCenterStatusBarStyle;
- (long long)preferredLeadingStatusBarStyle;
- (long long)preferredTrailingStatusBarStyle;
- (long long)ts_preferredCenterStatusBarStyle;
- (long long)ts_preferredLeadingStatusBarStyle;
- (long long)ts_preferredTrailingStatusBarStyle;

@end
