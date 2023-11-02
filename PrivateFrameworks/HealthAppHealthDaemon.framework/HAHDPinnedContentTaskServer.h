
@interface HAHDPinnedContentTaskServer : HDStandardTaskServer <HAHDPinnedContentStoreServerInterface>

+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_fetchPinnedContentInDomain:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_movePinnedContentWithIdentifier:(id)arg1 inDomain:(id)arg2 toIndex:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_pinContentWithIdentifier:(id)arg1 inDomain:(id)arg2 atIndex:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_unpinAllContentInDomain:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_unpinContentWithIdentifier:(id)arg1 inDomain:(id)arg2 completion:(id /* block */)arg3;

@end
