
@interface CXXPCChannelSource : CXChannelSource {
    CXChannelServiceClient * _client;
}

@property (nonatomic, retain) CXChannelServiceClient *client;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)client;
- (id)initWithClient:(id)arg1;
- (bool)isConnected;
- (bool)isPermittedToUseBluetoothAccessories;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (id)localizedName;
- (int)processIdentifier;
- (void)setClient:(id)arg1;
- (id)vendorProtocolDelegate;

@end
