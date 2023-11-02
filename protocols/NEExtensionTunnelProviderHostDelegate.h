
@protocol NEExtensionTunnelProviderHostDelegate <NEExtensionProviderHostDelegate>

@required

- (void)extension:(void *)arg1 didRequestSocket:(void *)arg2 interface:(void *)arg3 local:(void *)arg4 remote:(void *)arg5 effectivePID:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 12: NEExtensionTunnelProviderHostContext *, bool, NSString *, NSData *, NSData *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)extension:(NEExtensionTunnelProviderHostContext *)arg1 didSetStatus:(long long)arg2;
- (void)extension:(void *)arg1 didSetTunnelConfiguration:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NEExtensionTunnelProviderHostContext *, NETunnelNetworkSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)extensionDidDetachIPC:(NEExtensionTunnelProviderHostContext *)arg1;

@end
