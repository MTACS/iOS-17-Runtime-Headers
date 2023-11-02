
@interface C2MultipeerDiscovery : NSObject {
    NSObject<OS_nw_browser> * _browser;
    NSObject<OS_nw_listener> * _listener;
    NSUUID * _myPeerID;
    C2Multipeer * _parent;
}

@property (nonatomic, retain) NSObject<OS_nw_browser> *browser;
@property (nonatomic, retain) NSObject<OS_nw_listener> *listener;
@property (nonatomic, retain) NSUUID *myPeerID;
@property (nonatomic) C2Multipeer *parent;

- (void).cxx_destruct;
- (id)_browser;
- (id)_listener;
- (id)_peerToPeerParameters;
- (id)browser;
- (id)initWithParent:(id)arg1;
- (id)listener;
- (id)myPeerID;
- (id)parent;
- (void)setBrowser:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setParent:(id)arg1;

@end
