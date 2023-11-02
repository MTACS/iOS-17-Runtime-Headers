
@interface GKSession : NSObject {
    GKViceroySession * _session;
}

@property (getter=isAvailable) bool available;
@property <GKSessionDelegate> *delegate;
@property double disconnectTimeout;
@property (readonly) NSString *displayName;
@property (readonly) NSString *peerID;
@property (nonatomic, retain) GKViceroySession *session;
@property (readonly) NSString *sessionID;
@property (readonly) int sessionMode;

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
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3;
- (id)initWithViceroySession:(id)arg1;
- (bool)isAvailable;
- (bool)isBusy;
- (bool)isPeerBusy:(id)arg1;
- (id)peerID;
- (id)peersWithConnectionState:(int)arg1;
- (id)privateDelegate;
- (id)privateImpl;
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
- (void)setPrivateDelegate:(id)arg1;
- (void)setSession:(id)arg1;

@end
