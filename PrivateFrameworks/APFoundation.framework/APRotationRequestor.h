
@interface APRotationRequestor : APXPCActionRequester <APRotateXPC>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canShareConnection;
+ (id)machService;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)remoteObjectInterface;
- (void)rotate:(id /* block */)arg1;

@end
