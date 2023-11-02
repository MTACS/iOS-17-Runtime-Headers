
@protocol NEAppProxyProviderContainerDelegate

@required

- (void)container:(NEAppProxyProviderContainer *)arg1 didFailWithError:(NSError *)arg2;
- (void)container:(void *)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NEAppProxyProviderContainer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)container:(void *)arg1 didSetTunnelConfiguration:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NEAppProxyProviderContainer *, NETunnelNetworkSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)container:(NEAppProxyProviderContainer *)arg1 didStartWithError:(NSError *)arg2;

@end
