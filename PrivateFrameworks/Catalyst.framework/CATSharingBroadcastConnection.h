
@interface CATSharingBroadcastConnection : NSObject <CATSharingConnection> {
    bool  _closed;
    NSError * _closedError;
    <CATSharingConnectionDelegate> * _delegate;
    <CATSharingBroadcastPrimitives> * mBroadcastPrimitives;
    CATOperationQueue * mCatalystQueue;
    bool  mIsClosing;
    CATOperationQueue * mOutgoingQueue;
    <CATTimerSource> * mTimerSource;
    <CATTimer> * mTombstoneTimer;
}

@property (getter=isClosed, nonatomic) bool closed;
@property (nonatomic, retain) NSError *closedError;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CATSharingConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CATSharingDevice *remoteDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)addBroadcastPrimitiveHandlers;
- (void)close;
- (void)closeWithError:(id)arg1 reportToRemote:(bool)arg2;
- (id)closedError;
- (id)delegate;
- (void)handleCloseMessage:(id)arg1;
- (void)handleSentMessage:(id)arg1;
- (void)handleUnparsableMessageDictionary:(id)arg1;
- (id)initWithBroadcastPrimitives:(id)arg1 timerSource:(id)arg2;
- (bool)isClosed;
- (void)messageReceived:(id)arg1;
- (id)remoteDevice;
- (void)removeBroadcastPrimitiveHandlers;
- (void)sendData:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)sendTearDownMessageWithError:(id)arg1;
- (void)setClosed:(bool)arg1;
- (void)setClosedError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tombstoneWithError:(id)arg1;

@end
