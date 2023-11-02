
@interface VCConnection : NSObject {
    NSDictionary * _connectionSelectionPriorities;
    unsigned char  _connectionType;
    unsigned long long  _constantConnectionOverhead;
    unsigned short  _linkFlags;
    int  _priority;
    unsigned short  _remoteLinkFlags;
    struct tagVCConnectionProtocolRealtimeVTable { 
        int (*matchesSourceDestinationInfo)(); 
        int (*sourceDestinationInfo)(); 
        int (*isRelay)(); 
        int (*equal)(); 
        int (*isLocalOnCellular)(); 
        int (*isRemoteOnCellular)(); 
        int (*isIPv6)(); 
        int (*localCellTech)(); 
        int (*setLocalCellTech)(); 
        int (*remoteCellTech)(); 
        int (*setRemoteCellTech)(); 
        int (*copyDescription)(); 
        int (*isLocalOnWiFi)(); 
        int (*isRemoteOnWiFi)(); 
        int (*isOnSameInterfacesWithConnection)(); 
        int (*isEndToEndLink)(); 
        int (*connectionID)(); 
        int (*isLocalExpensive)(); 
        int (*isLocalConstrained)(); 
        int (*isRemoteExpensive)(); 
        int (*isRemoteConstrained)(); 
        int (*reportingIPVersion)(); 
        int (*reportingQRServerConfig)(); 
        int (*isHopByHopEncryptionSupported)(); 
    }  _vTable;
}

- (long long)compare:(id)arg1 isPrimary:(bool)arg2 selectionPolicy:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)arg3;
- (long long)compareConnectionTypePriority:(id)arg1 selectionPolicy:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)arg2;
- (long long)compareE2EPriority:(id)arg1 selectionPolicy:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)arg2;
- (long long)compareInterfacePriority:(id)arg1 isPrimary:(bool)arg2;
- (long long)compareIpVersionPriority:(id)arg1 selectionPolicy:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)arg2;
- (long long)compareVpnPriority:(id)arg1 selectionPolicy:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; }*)arg2;
- (void)dealloc;
- (id)getConnectionSelectionPriorities;
- (id)init;
- (void)setLinkFlags:(unsigned short)arg1;
- (void)setRemoteLinkFlags:(unsigned short)arg1;
- (void)setUpVTable;

@end
