
@protocol NEExtensionPacketTunnelProviderProtocol <NEExtensionTunnelProviderProtocol>

@required

- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setAppUUIDMap:(NSDictionary *)arg1;
- (void)setupVirtualInterface:(NEVirtualInterfaceParameters *)arg1;

@end
