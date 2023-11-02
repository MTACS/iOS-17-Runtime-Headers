
@interface CATSharingServiceTransport : CATTransport <CATSharingConnectionDelegate> {
    CATOperationQueue * mCatalystQueue;
    <CATSharingConnection> * mConnection;
    bool  mIsActive;
    bool  mIsInvalidated;
    NSMutableArray * mReceivedMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connection:(id)arg1 receivedData:(id)arg2;
- (void)connectionClosed:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (void)invalidateConnection;
- (void)invalidateIfNeeded;
- (id)name;
- (id)operationToSendMessage:(id)arg1;
- (void)processReceivedMessages;
- (void)resumeConnection;
- (void)suspendConnection;

@end
