
@interface MPRequestResponseController : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <MPRequestCancellationToken> * _cancelToken;
    <MPRequestResponseControllerDelegate> * _delegate;
    NSError * _lastError;
    bool  _needsReload;
    long long  _numberOfObservers;
    id  _pendingResponse;
    NSObject<OS_dispatch_queue> * _queue;
    id  _request;
    NSString * _requestID;
    id  _response;
    double  _retryInterval;
    NSObject<OS_dispatch_source> * _retryTimer;
    bool  _shouldAutomaticallyLoad;
    unsigned long long  _stateHandle;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic) <MPRequestResponseControllerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) id request;
@property (nonatomic, retain) id response;

- (void).cxx_destruct;
- (void)_onQueue_reloadIfNeeded;
- (void)_onQueue_scheduleRetryAfterInterval:(double)arg1;
- (id)_onQueue_stateDictionary;
- (void)_onQueue_updateRequestID;
- (void)_responseDidInvalidate:(id)arg1;
- (void)beginAutomaticResponseLoading;
- (id)calloutQueue;
- (void)dealloc;
- (id)delegate;
- (void)endAutomaticResponseLoading;
- (id)init;
- (id)queue;
- (void)reloadIfNeeded;
- (id)request;
- (id)response;
- (void)setDelegate:(id)arg1;
- (void)setNeedsReload;
- (void)setNeedsReloadForSignificantRequestChange;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;

@end
