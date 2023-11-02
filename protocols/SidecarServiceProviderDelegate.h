
@protocol SidecarServiceProviderDelegate <SidecarRequestDelegate>

@required

- (void)sidecarServiceProviderHandleRequest:(SidecarRequest *)arg1;
- (void)sidecarServiceProviderTerminate;

@end
