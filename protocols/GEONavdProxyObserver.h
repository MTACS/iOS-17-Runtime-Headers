
@protocol GEONavdProxyObserver

@required

- (void)navdProxyReceivedData:(NSData *)arg1 ofType:(NSString *)arg2;
- (void)navdProxyReceivedHypothesis:(GEORouteHypothesis *)arg1 forClient:(GEONavdClientInfo *)arg2;

@end
