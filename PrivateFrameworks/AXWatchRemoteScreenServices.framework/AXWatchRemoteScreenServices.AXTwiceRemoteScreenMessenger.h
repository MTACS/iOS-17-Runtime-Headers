
@interface AXWatchRemoteScreenServices.AXTwiceRemoteScreenMessenger : NSObject <AXIDSServicesClient, AXTwiceRemoteScreenMessengerProtocolObjc> {
    void delegate;
}

@property (nonatomic) <AXTwiceRemoteScreenMessengerDelegateProtocolObjc> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cleanup;
- (void)connectedDevicesDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveIncomingData:(id)arg1;
- (id)init;
- (void)receiveMessage:(id)arg1;
- (void)reconnectToAXUIServerIfNeeded;
- (void)sendMessage:(id)arg1;
- (void)serverConnectionWasInterrupted;
- (void)setDelegate:(id)arg1;

@end
