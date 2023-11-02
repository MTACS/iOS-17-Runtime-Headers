
@interface VCMockIDSDataChannelLinkContext : IDSDataChannelLinkContext {
    unsigned short  _estimatedPerPacketConstantOverhead;
    bool  _forceNetworkCellular;
    bool  _idsUPlusOneMode;
    unsigned short  _localLinkFlags;
    unsigned char  _networkType;
    unsigned char  _remoteNetworkType;
}

@property (nonatomic) bool idsUPlusOneMode;
@property unsigned char networkType;
@property unsigned char remoteNetworkType;

- (unsigned int)RATType;
- (long long)connectionType;
- (unsigned short)estimatedPerPacketConstantOverhead;
- (bool)idsUPlusOneMode;
- (id)init;
- (bool)isVirtualRelayLink;
- (unsigned short)localLinkFlags;
- (unsigned char)networkType;
- (unsigned char)remoteNetworkType;
- (unsigned int)remoteRATType;
- (void)setIdsUPlusOneMode:(bool)arg1;
- (void)setNetworkType:(unsigned char)arg1;
- (void)setRemoteNetworkType:(unsigned char)arg1;

@end
