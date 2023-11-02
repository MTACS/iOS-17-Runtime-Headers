
@interface _HMDHTTPServerClientConnection : HMFObject {
    HMFHTTPClientConnection * _connection;
    HMDHTTPDevice * _device;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFTimer * _lostConnectionTimer;
    NSMutableDictionary * _pendingTransactionCompletionHandlers;
    NSMutableArray * _receiveMessageRequests;
    NSOperationQueue * _requestOperationQueue;
    NSOperationQueue * _transactionOperationQueue;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, retain) HMFHTTPClientConnection *connection;
@property (nonatomic, readonly) HMDHTTPDevice *device;
@property (nonatomic, readonly) HMFTimer *lostConnectionTimer;
@property (nonatomic, readonly) NSMutableArray *receiveMessageRequests;
@property (nonatomic, readonly) NSOperationQueue *requestOperationQueue;
@property (nonatomic, readonly) NSOperationQueue *transactionOperationQueue;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_reallySendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)addCompletionHandler:(id /* block */)arg1 forTransactionIdentifier:(id)arg2;
- (id)connection;
- (id)debugDescription;
- (id)dequeueRequest;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)device;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (void)invalidate;
- (bool)isConnected;
- (id)lostConnectionTimer;
- (void)queueRequest:(id)arg1;
- (id)receiveMessageRequests;
- (id /* block */)removeCompletionHandlerForTransactionIdentifier:(id)arg1;
- (id)requestOperationQueue;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (id)shortDescription;
- (id)transactionOperationQueue;

@end
