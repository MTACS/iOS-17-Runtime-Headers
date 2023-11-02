
@protocol VCConnectionProtocol <NSObject>

@required

- (long long)compare:(id <VCConnectionProtocol>)arg1 isPrimary:(bool)arg2 selectionPolicy:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)arg3;
- (int)connectionMTU;
- (NSUUID *)connectionUUID;
- (unsigned int)downlinkBitrateCap;
- (bool)isLocalDelegated;
- (bool)isLocalOn5G;
- (bool)isRemoteDelegated;
- (bool)isRemoteOn5G;
- (bool)isVPN;
- (bool)isVirtualRelayLink;
- (bool)isWifiToWifi;
- (int)localConnectionType;
- (NSString *)localInterfaceName;
- (NSString *)localInterfaceTypeString;
- (int)maxConnectionMTU;
- (int)remoteConnectionType;
- (NSString *)remoteInterfaceTypeString;
- (bool)serverIsDegraded;
- (void)setConnectionMTU:(int)arg1;
- (void)setDownlinkBitrateCap:(unsigned int)arg1;
- (void)setMaxConnectionMTU:(int)arg1;
- (void)setUpVTable;
- (void)setUplinkAudioBitrateCapOneToOne:(unsigned int)arg1;
- (void)setUplinkBitrateCap:(unsigned int)arg1;
- (void)setUplinkBitrateCapOneToOne:(unsigned int)arg1;
- (unsigned int)type;
- (unsigned short)updateMaxConnectionMTU:(unsigned short)arg1;
- (unsigned int)uplinkAudioBitrateCapOneToOne;
- (unsigned int)uplinkBitrateCap;
- (unsigned int)uplinkBitrateCapOneToOne;

@end
