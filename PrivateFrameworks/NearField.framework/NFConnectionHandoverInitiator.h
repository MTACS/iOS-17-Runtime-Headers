
@interface NFConnectionHandoverInitiator : NFConnectionHandoverController <NFReaderSessionDelegate> {
    NFTag * _connectedTag;
    NFConnectionHandoverRequest * _delayRequest;
    id /* block */  _delayRequestCompletion;
    NFTimer * _delayRequestTimer;
    NSObject<NFConnectionHandoverInitiatorDelegate> * _delegate;
    NFReaderSession * _readerSession;
    NFTimer * _tagConnectionTimer;
}

@property (nonatomic, retain) NFTag *connectedTag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NFConnectionHandoverRequest *delayRequest;
@property (nonatomic, copy) id /* block */ delayRequestCompletion;
@property (nonatomic, retain) NFTimer *delayRequestTimer;
@property (nonatomic) NSObject<NFConnectionHandoverInitiatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFReaderSession *readerSession;
@property (readonly) Class superclass;
@property (nonatomic, retain) NFTimer *tagConnectionTimer;

+ (id)initiatorWithDelegate:(id)arg1;
+ (id)initiatorWithDelegate:(id)arg1 callbackQueue:(id)arg2;

- (void).cxx_destruct;
- (void)_delayRequestDidExpire;
- (bool)_processSelectResponse:(id)arg1;
- (void)_processSelectRetry:(id)arg1 originalRequest:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_start;
- (void)_stopWithError:(id)arg1;
- (void)_tagConnectionDidExpire;
- (void)_triggerDelayRequestCompletionWithSelect:(id)arg1 error:(id)arg2;
- (id)connectedTag;
- (id)delayRequest;
- (id /* block */)delayRequestCompletion;
- (id)delayRequestTimer;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 callbackQueue:(id)arg2;
- (id)readerSession;
- (void)readerSession:(id)arg1 didDetectTags:(id)arg2;
- (void)readerSession:(id)arg1 externalReaderFieldNotification:(id)arg2;
- (void)readerSessionDidEndUnexpectedly:(id)arg1;
- (void)readerSessionDidEndUnexpectedly:(id)arg1 reason:(id)arg2;
- (void)send:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)sendHandoverRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)setConnectedTag:(id)arg1;
- (void)setDelayRequest:(id)arg1;
- (void)setDelayRequestCompletion:(id /* block */)arg1;
- (void)setDelayRequestTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReaderSession:(id)arg1;
- (void)setTagConnectionTimer:(id)arg1;
- (void)start;
- (void)stop;
- (id)tagConnectionTimer;

@end
