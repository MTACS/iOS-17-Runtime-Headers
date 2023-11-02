
@protocol SBApplicationSceneHandleProviding <SBApplicationSceneIdentityProviding>

@required

- (SBApplicationSceneHandle *)fetchOrCreateApplicationSceneHandleForRequest:(SBApplicationSceneHandleRequest *)arg1;

@end
