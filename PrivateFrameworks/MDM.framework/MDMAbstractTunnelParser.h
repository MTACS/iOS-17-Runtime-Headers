
@interface MDMAbstractTunnelParser : NSObject

+ (id)responseWithError:(id)arg1;
+ (id)responseWithStatus:(id)arg1;

- (id)_commandDisconnect:(id)arg1;
- (void)processRequest:(id)arg1 assertion:(id)arg2 completionBlock:(id /* block */)arg3;

@end
