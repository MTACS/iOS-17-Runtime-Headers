
@interface GEOETATrafficUpdateRequester : NSObject

- (void)cancelRequest:(id)arg1;
- (void)sendConditionalETATrafficUpdateRequest:(id)arg1 timeWindowDuration:(double)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(id /* block */)arg5 finishedHandler:(id /* block */)arg6;
- (void)sendETATrafficUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 finishedHandler:(id /* block */)arg4;

@end
