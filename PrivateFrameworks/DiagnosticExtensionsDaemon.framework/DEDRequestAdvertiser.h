
@interface DEDRequestAdvertiser : NSObject <MCNearbyServiceAdvertiserDelegate, MCSessionDelegate> {
    MCNearbyServiceAdvertiser * _advertiser;
    NSString * _hostIdentifier;
    id /* block */  _onPeerJoin;
    MCPeerID * _peerID;
    MCSession * _session;
}

@property (retain) MCNearbyServiceAdvertiser *advertiser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *hostIdentifier;
@property (nonatomic, copy) id /* block */ onPeerJoin;
@property (retain) MCPeerID *peerID;
@property (retain) MCSession *session;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)advertiser;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(id /* block */)arg4;
- (void)broadcastRecord:(id)arg1;
- (id)displayName;
- (id)encodeRequestRecordAsJSON:(id)arg1;
- (id)hostIdentifier;
- (id /* block */)onPeerJoin;
- (id)peerID;
- (void)sendRecord:(id)arg1 toPeer:(id)arg2;
- (id)session;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3;
- (void)setAdvertiser:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setOnPeerJoin:(id /* block */)arg1;
- (void)setPeerID:(id)arg1;
- (void)setSession:(id)arg1;
- (void)start;
- (void)stop;

@end
