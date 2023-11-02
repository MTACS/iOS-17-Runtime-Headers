
@protocol MKPOSTSRPRouterDelegate <NSObject>

@required

- (void)routerDidAuthenticateClient:(MKPOSTSRPRouter *)arg1;
- (void)routerDidRejectClient:(MKPOSTSRPRouter *)arg1;

@end
