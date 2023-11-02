
@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate, WiFiP2PXPCConnectionDelegate> {
    NSNumber * _datapathID;
    <WiFiAwareDataSessionDelegate> * _delegate;
    WiFiAwareDiscoveryResult * _discoveryResult;
    WiFiMACAddress * _initiatorDataAddress;
    WiFiAwareInternetSharingConfiguration * _internetSharingConfiguration;
    long long  _internetSharingPolicy;
    unsigned int  _localInterfaceIndex;
    NSString * _passphrase;
    NSData * _pmk;
    NSData * _pmkID;
    WiFiAwarePublishDatapathServiceSpecificInfo * _serviceSpecificInfo;
    long long  _serviceType;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WiFiAwareDataSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WiFiAwareDiscoveryResult *discoveryResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
@property (nonatomic, readonly) long long internetSharingPolicy;
@property (nonatomic, readonly) WiFiMACAddress *localDataAddress;
@property (nonatomic, readonly) unsigned int localInterfaceIndex;
@property (nonatomic, readonly) NSString *passphrase;
@property (nonatomic, readonly) NSData *pmk;
@property (nonatomic, readonly) NSData *pmkID;
@property (nonatomic, readonly) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic, readonly) long long serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)datapathConfirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2;
- (void)datapathFailedToStartWithError:(long long)arg1;
- (void)datapathReceivedControlDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 onInterfaceIndex:(unsigned int)arg3;
- (void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 localInterfaceIndex:(unsigned int)arg3;
- (void)datapathTerminatedWithReason:(long long)arg1;
- (void)datapathUpdatedInternetSharingPolicy:(long long)arg1;
- (void)datapathUpdatedPeerRSSI:(int)arg1;
- (void)datapathUpdatedServiceSpecificInfo:(id)arg1;
- (id)delegate;
- (id)description;
- (id)discoveryResult;
- (id)exportedInterface;
- (id)exportedObject;
- (void)generateCurrentNetworkRecordForInternetSharingSession:(id /* block */)arg1;
- (void)generateStatisticsReportWithCompletionHandler:(id /* block */)arg1;
- (void)handleError:(long long)arg1;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4 pmk:(id)arg5 pmkID:(id)arg6;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 pmk:(id)arg4;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 pmk:(id)arg4 pmkID:(id)arg5;
- (id)internetSharingConfiguration;
- (long long)internetSharingPolicy;
- (id)localDataAddress;
- (unsigned int)localInterfaceIndex;
- (id)passphrase;
- (id)pmk;
- (id)pmkID;
- (id)remoteObjectInterface;
- (void)reportIssue:(id)arg1;
- (void)resetState;
- (id)serviceSpecificInfo;
- (long long)serviceType;
- (void)setDelegate:(id)arg1;
- (void)setInternetSharingConfiguration:(id)arg1;
- (void)setWantsPeerRSSIUpdates:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)start;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (void)updateLinkStatus:(long long)arg1;

@end
