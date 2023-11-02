
@interface _IDSDataChannelLinkContext : NSObject {
    NSUUID * _QRSessionID;
    unsigned int  _RATType;
    unsigned short  _channelNumber;
    long long  _connectionType;
    _IDSDataChannelLinkConnections * _connections;
    BOOL  _delegatedLinkID;
    bool  _directConnectionIsReady;
    unsigned short  _estimatedPerPacketConstantOverhead;
    NSData * _hbhDecryptionkey;
    NSData * _hbhEncryptionkey;
    bool  _isVirtualRelayLink;
    BOOL  _linkID;
    NSUUID * _linkUUID;
    unsigned int  _localDataSoMask;
    NSString * _localInterfaceName;
    unsigned short  _localLinkFlags;
    unsigned short  _localRelayLinkID;
    unsigned int  _maxBitrate;
    unsigned short  _maxMTU;
    unsigned char  _networkType;
    unsigned long long  _parentUniquePID;
    NSDictionary * _qrExperiments;
    NSString * _relayProtocolStackDescription;
    long long  _relayServerProvider;
    NSData * _relaySessionKey;
    NSData * _relaySessionToken;
    long long  _remoteConnectionType;
    unsigned int  _remoteDataSoMask;
    unsigned short  _remoteLinkFlags;
    unsigned char  _remoteNetworkType;
    unsigned int  _remoteRATType;
    unsigned short  _remoteRelayLinkID;
    bool  _serverIsDegraded;
}

- (void).cxx_destruct;
- (id)description;

@end
