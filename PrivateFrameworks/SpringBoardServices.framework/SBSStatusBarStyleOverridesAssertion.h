
@interface SBSStatusBarStyleOverridesAssertion : SBSBackgroundActivityAssertion

@property (nonatomic, readonly) unsigned long long statusBarStyleOverrides;

+ (id)assertionWithStatusBarStyleOverrides:(unsigned long long)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
+ (id)backgroundLocationAssertionForPID:(int)arg1;

- (id)initWithStatusBarStyleOverrides:(unsigned long long)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
- (unsigned long long)statusBarStyleOverrides;

@end
