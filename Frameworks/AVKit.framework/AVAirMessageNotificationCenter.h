
@interface AVAirMessageNotificationCenter : NSObject <AVAirTransportDelegate, AVBonjourServiceDelegate> {
    NSMutableSet * _activeChannels;
    <AVAirMessageNotificationCenterDelegate> * _delegate;
    AVBonjourService * _mainService;
    AVPlayerItem * _nowPlayingPlayerItem;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
}

@property (nonatomic, retain) NSMutableSet *activeChannels;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVAirMessageNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVBonjourService *mainService;
@property (nonatomic, retain) AVPlayerItem *nowPlayingPlayerItem;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (bool)_isNotificationCenterEnabled;
+ (bool)isPrepared;
+ (void)prepare;
+ (id)shared;

- (void).cxx_destruct;
- (id)_initPrivate;
- (id)activeChannels;
- (void)airTransport:(id)arg1 didReceiveObject:(id)arg2;
- (void)airTransportInputDidClose:(id)arg1;
- (void)bonjourService:(id)arg1 didAcceptConnectionChannel:(id)arg2;
- (void)bonjourService:(id)arg1 didCloseChannel:(id)arg2;
- (id)bonjourServiceAdditionalTXTRecordInfo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleCommandMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)mainService;
- (id)nowPlayingPlayerItem;
- (id)playerItemForIdentifier:(id)arg1;
- (id)queue;
- (void)setActiveChannels:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNowPlayingPlayerItem:(id)arg1;
- (void)start;
- (void)stop;

@end
