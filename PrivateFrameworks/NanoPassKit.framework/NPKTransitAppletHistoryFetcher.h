
@interface NPKTransitAppletHistoryFetcher : NSObject {
    NSString * _aidToFetch;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <NPKTransitAppletHistoryFetcherDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<NFSession> * _pendingSessionHandle;
}

@property (nonatomic, retain) NSString *aidToFetch;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) <NPKTransitAppletHistoryFetcherDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSObject<NFSession> *pendingSessionHandle;

- (void).cxx_destruct;
- (void)_handleActiveSecureElementManagerSession:(id)arg1;
- (void)_handleSecureElementSessionFailureWithError:(id)arg1;
- (id)aidToFetch;
- (id)callbackQueue;
- (id)delegate;
- (id)initWithCallbackQueue:(id)arg1;
- (id)internalQueue;
- (id)pendingSessionHandle;
- (void)requestTransitHistoryFetch;
- (void)setAIDToFetch:(id)arg1;
- (void)setAidToFetch:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setPendingSessionHandle:(id)arg1;

@end
