
@protocol SBWindowLevelAssertionProviding <NSObject>

@required

- (SBWindowLevelAssertion *)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 windowScene:(SBWindowScene *)arg3 reason:(NSString *)arg4;

@end
