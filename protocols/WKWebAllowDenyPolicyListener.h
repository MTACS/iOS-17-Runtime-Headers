
@protocol WKWebAllowDenyPolicyListener <NSObject>

@required

- (void)allow;
- (void)deny;

@end
