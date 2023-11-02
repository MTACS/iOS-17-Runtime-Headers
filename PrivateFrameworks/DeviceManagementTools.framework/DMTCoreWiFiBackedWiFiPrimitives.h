
@interface DMTCoreWiFiBackedWiFiPrimitives : NSObject <DMTWiFiPrimitives> {
    bool  _cancelled;
    id /* block */  _joinNetworkCompletion;
    NSTimer * _joinNetworkTimeout;
    CWFInterface * _wiFiInterface;
}

@property (getter=isCancelled) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ joinNetworkCompletion;
@property (nonatomic, retain) NSTimer *joinNetworkTimeout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CWFInterface *wiFiInterface;
@property (nonatomic, readonly) bool wifiInterfacesAvailable;
@property (nonatomic, readonly, copy) NSString *wifiNetworkName;

- (void).cxx_destruct;
- (void)cancelJoiningWiFi;
- (void)dealloc;
- (void)didJoinNetworkWithError:(id)arg1;
- (void)disassociateWiFiNetworkWithCompletion:(id /* block */)arg1;
- (void)foundNetworks:(id)arg1 forCredential:(id)arg2 error:(id)arg3;
- (id)init;
- (bool)isCancelled;
- (id /* block */)joinNetworkCompletion;
- (id)joinNetworkTimeout;
- (void)joinNetworkWithCredential:(id)arg1 scanRecord:(id)arg2;
- (void)joinWiFiNetworkWithCredential:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)networkJoinTimeOutDidFire:(id)arg1;
- (void)scanForNetworksWithCredentials:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setJoinNetworkCompletion:(id /* block */)arg1;
- (void)setJoinNetworkTimeout:(id)arg1;
- (id)wiFiInterface;
- (bool)wifiInterfacesAvailable;
- (id)wifiNetworkName;

@end
