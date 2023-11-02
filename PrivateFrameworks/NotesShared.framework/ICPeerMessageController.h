
@interface ICPeerMessageController : NSObject {
    <ICPeerMessageControllerDelegate> * _delegate;
    NSMutableDictionary * _deviceRequests;
    NSMutableDictionary * _deviceUUIDToSource;
    NSMutableDictionary * _sourceToDevices;
}

@property (nonatomic) <ICPeerMessageControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)deviceRequestsForUUID:(id)arg1;
- (void)disconnectedFromSource:(id)arg1;
- (void)handleKeepAliveMessage:(const void*)arg1 fromDevice:(id)arg2;
- (void)handleMessage:(id)arg1 fromSource:(id)arg2;
- (void)handleNoteMessage:(const void*)arg1 fromDevice:(id)arg2 data:(id)arg3;
- (void)handleRequestNoteMessage:(const void*)arg1 fromDevice:(id)arg2;
- (id)init;
- (void)requestNote:(id)arg1 from:(id)arg2;
- (void)sendKeepAlive;
- (void)sendMediaURL:(id)arg1 toSource:(id)arg2;
- (id)sendMessage:(void*)arg1 toDevices:(id)arg2;
- (id)sendMessage:(void*)arg1 toSource:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)sendMessage:(void*)arg1 toSources:(id)arg2;
- (id)sendNote:(id)arg1 toDevices:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
