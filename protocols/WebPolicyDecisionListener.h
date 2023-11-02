
@protocol WebPolicyDecisionListener <NSObject>

@required

- (void)download;
- (void)ignore;
- (void)use;

@end
