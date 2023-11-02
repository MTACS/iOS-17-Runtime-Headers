
@protocol LNRuntimeAssertionsTaking <NSObject>

@required

- (void)acquireRuntimeAssertions;
- (void)invalidateRuntimeAssertions;

@end
