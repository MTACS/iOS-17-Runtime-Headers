
@interface HMDAccessoryDataStreamAdapter : HMFObject <HMDDataStreamBulkSendListener, HMFLogging> {
    HMDHAPAccessory * _accessory;
    <HMDDataStreamBulkSendSession> * _currentBulkSendSession;
    <HMDAccessoryDataStreamAdapterDelegate> * _delegate;
    bool  _didBulkSendComplete;
    bool  _didBulkSendFail;
    NSString * _fileType;
    NSDictionary * _metadata;
    id /* block */  _pendingOpenSessionCallback;
    NSString * _reason;
    bool  _transportReady;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (getter=isBulkSendActive, readonly) bool bulkSendActive;
@property (retain) <HMDDataStreamBulkSendSession> *currentBulkSendSession;
@property (readonly, copy) NSString *debugDescription;
@property <HMDAccessoryDataStreamAdapterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool didBulkSendComplete;
@property bool didBulkSendFail;
@property (readonly, copy) NSString *fileType;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *metadata;
@property (copy) id /* block */ pendingOpenSessionCallback;
@property (readonly) NSString *reason;
@property (getter=isSessionOpenInProgress, readonly) bool sessionOpenInProgress;
@property (readonly) Class superclass;
@property bool transportReady;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_bulkSendDidComplete;
- (void)_bulkSendDidFail;
- (void)_callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2;
- (void)_handleAccessoryDidClose;
- (bool)_handleFrame:(id)arg1;
- (void)_openSession;
- (void)_setUpTransport;
- (id)accessory;
- (void)accessory:(id)arg1 didCloseDataStreamWithError:(id)arg2;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;
- (void)accessoryDidStartListening:(id)arg1;
- (id)attributeDescriptions;
- (void)callPendingOpenSessionCallbackWithResult:(id)arg1 error:(id)arg2;
- (id)currentBulkSendSession;
- (void)dealloc;
- (id)delegate;
- (bool)didBulkSendComplete;
- (bool)didBulkSendFail;
- (id)fileType;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 fileType:(id)arg3 metadata:(id)arg4 reason:(id)arg5;
- (bool)isBulkSendActive;
- (bool)isSessionOpenInProgress;
- (id)logIdentifier;
- (id)metadata;
- (id /* block */)pendingOpenSessionCallback;
- (void)readData;
- (id)reason;
- (void)setCurrentBulkSendSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidBulkSendComplete:(bool)arg1;
- (void)setDidBulkSendFail:(bool)arg1;
- (void)setPendingOpenSessionCallback:(id /* block */)arg1;
- (void)setTransportReady:(bool)arg1;
- (void)setUpWithCallback:(id /* block */)arg1;
- (void)shutDown;
- (bool)transportReady;
- (id)workQueue;

@end
