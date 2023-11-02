
@interface AVCMoments : NSObject {
    unsigned int  _capabilities;
    AVConferenceXPCClient * _connection;
    int  _currentActiveRequestsCount;
    int  _currentPendingRequestsCount;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _requesterID;
    NSMutableDictionary * _requests;
    long long  _streamToken;
}

@property (nonatomic, readonly) int activeRequestCount;
@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic, readonly) <AVCMomentsDelegate> *delegate;
@property (nonatomic, readonly) int pendingRequestCount;
@property (nonatomic, readonly) NSString *requesterID;
@property (nonatomic, readonly) long long streamToken;

- (int)activeRequestCount;
- (bool)avcMediaRecorderRequestDidEndRequest:(id)arg1 withError:(id*)arg2;
- (bool)avcMediaRecorderRequestDidRejectRequest:(id)arg1 withError:(id*)arg2;
- (bool)avcMediaRecorderRequestDidStartRequest:(id)arg1 withError:(id*)arg2;
- (unsigned int)capabilities;
- (bool)connectWithConfiguration:(id)arg1;
- (bool)connectWithStreamToken:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (id)description;
- (void)didEndProcessingRequestHelperWithResult:(id)arg1;
- (void)didFinishRequestHelperWithResult:(id)arg1;
- (void)didStartProcessingRequestHelperWithResult:(id)arg1;
- (void)disconnect;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3;
- (id)initWithStreamToken:(long long)arg1 requesterID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;
- (id)newDictionaryForRequest:(id)arg1;
- (id)newRequestWithMediaType:(unsigned char)arg1 mode:(unsigned char)arg2 requesteeID:(id)arg3;
- (id)newRequestWithMediaType:(unsigned char)arg1 requesteeID:(id)arg2;
- (int)pendingRequestCount;
- (void)registerBlocksForNotifications;
- (id)requesterID;
- (bool)setupDelegate:(id)arg1 dispatchQueue:(id)arg2;
- (long long)streamToken;
- (void)updateCapabilities:(unsigned int)arg1;

@end
