
@interface SFRemoteHotspotSession : NSObject <SFCompanionXPCManagerObserver, SFRemoteHotspotClient> {
    bool  _browsing;
    <SFRemoteHotspotProtocol> * _connectionProxy;
    <SFRemoteHotspotSessionDelegate> * _delegate;
}

@property bool browsing;
@property (retain) <SFRemoteHotspotProtocol> *connectionProxy;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFRemoteHotspotSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)browsing;
- (id)connectionProxy;
- (id)delegate;
- (void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)setBrowsing:(bool)arg1;
- (void)setConnectionProxy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startBrowsing;
- (void)stopBrowsing;
- (void)updateLowLatencyFilter:(id)arg1 isAddFilter:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)updatedFoundDeviceList:(id)arg1;
- (void)xpcManagerConnectionInterrupted;

@end
