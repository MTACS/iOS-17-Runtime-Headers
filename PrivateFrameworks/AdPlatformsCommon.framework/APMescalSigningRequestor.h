
@interface APMescalSigningRequestor : APXPCActionRequester

+ (bool)canShareConnection;
+ (id)machService;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)init;
- (id)remoteObjectInterface;
- (id)signatureForData:(id)arg1;
- (void)signatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)signatureForData:(id)arg1 waitTime:(double)arg2 completion:(id /* block */)arg3;

@end
