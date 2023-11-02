
@interface GKViceroySession : GKSession {
    GKSession * _gkSession;
    GKSessionInternal * _session;
}

@property (nonatomic, retain) GKSession *gkSession;
@property (nonatomic, retain) GKSessionInternal *session;
@property (readonly) id viceroyInternalSession;

- (void).cxx_destruct;
- (bool)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (void)dealloc;
- (id)delegate;
- (void)denyConnectionFromPeer:(id)arg1;
- (id)description;
- (void)disableWifi;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (double)disconnectTimeout;
- (id)displayName;
- (id)displayNameForPeer:(id)arg1;
- (id)gkSession;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)initWithGKSession:(id)arg1 sessionID:(id)arg2 displayName:(id)arg3 sessionMode:(int)arg4;
- (bool)isAvailable;
- (bool)isBusy;
- (bool)isPeerBusy:(id)arg1;
- (bool)isWrappingGKSession:(id)arg1;
- (id)peerID;
- (id)peersWithConnectionState:(int)arg1;
- (id)privateDelegate;
- (bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (bool)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3;
- (id)session;
- (id)sessionID;
- (int)sessionMode;
- (void)setAvailable:(bool)arg1;
- (void)setBusy:(bool)arg1;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectTimeout:(double)arg1;
- (void)setGkSession:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setSession:(id)arg1;
- (id)viceroyInternalSession;
- (id)voiceChatWithName:(id)arg1 players:(id)arg2;

@end
