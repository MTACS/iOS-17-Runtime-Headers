
@interface NewsUI2.LocalDraftsDeviceListener : NSObject <MCNearbyServiceBrowserDelegate, MCSessionDelegate> {
    void $__lazy_storage_$_session;
    void delegate;
    void deviceInfo;
    void localFiles;
    void myPeerId;
    void previewServiceType;
    void serviceBrowser;
}

- (void).cxx_destruct;
- (void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(id /* block */)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;

@end
