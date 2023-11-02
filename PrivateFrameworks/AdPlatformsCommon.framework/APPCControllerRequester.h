
@interface APPCControllerRequester : NSObject <APControllerRequestCoordinatorDelegate> {
    bool  _invalid;
    NSError * _lastError;
    APUnfairLock * _lock;
    id /* block */  _newPromotedContentsDeliveryBlock;
    NSMutableDictionary * _requestCompletionBlockByRequestID;
    APControllerRequesterCoordinator * _requestCoordinator;
    NSUUID * _requesterID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalid;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, retain) APUnfairLock *lock;
@property (nonatomic, copy) id /* block */ newPromotedContentsDeliveryBlock;
@property (nonatomic, retain) NSMutableDictionary *requestCompletionBlockByRequestID;
@property (nonatomic, retain) APControllerRequesterCoordinator *requestCoordinator;
@property (nonatomic, retain) NSUUID *requesterID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAndfulfillAllRequestsWithError:(id)arg1;
- (id)_preprocessHandler:(id /* block */)arg1;
- (void)connectionSevered;
- (void)contentResponses:(id)arg1;
- (void)endRequests;
- (void)handleCompletionOfRequest:(id)arg1;
- (id)initWithDeliveryBlock:(id /* block */)arg1;
- (bool)invalid;
- (id)lastError;
- (id)lock;
- (id /* block */)newPromotedContentsDeliveryBlock;
- (void)preWarm:(id)arg1;
- (id)proxyURL;
- (void)proxyURLWithCompletionHandler:(id /* block */)arg1;
- (id)requestCompletionBlockByRequestID;
- (id)requestCoordinator;
- (void)requestPromotedContentOfTypes:(id)arg1 forContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)requesterID;
- (void)sendAndRankContent:(id)arg1 forContext:(id)arg2 placement:(unsigned long long)arg3 responseHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)setInvalid:(bool)arg1;
- (void)setLastError:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setNewPromotedContentsDeliveryBlock:(id /* block */)arg1;
- (void)setRequestCompletionBlockByRequestID:(id)arg1;
- (void)setRequestCoordinator:(id)arg1;
- (void)setRequesterID:(id)arg1;

@end
