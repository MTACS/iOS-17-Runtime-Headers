
@interface UIHandleStatusBarTapAction : BSAction

@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) unsigned long long statusBarStyleOverride;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithStatusBarStyle:(long long)arg1;
- (id)initWithStatusBarStyle:(long long)arg1 andStatusBarStyleOverride:(unsigned long long)arg2;
- (id)initWithStatusBarStyleOverride:(unsigned long long)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)statusBarStyle;
- (unsigned long long)statusBarStyleOverride;

@end
