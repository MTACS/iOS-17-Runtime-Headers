
@interface CKDLongLivedCallbackRelayOperation : CKDOperation <CKDOperationInfoDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)cancel;
- (bool)isInvalidated;
- (bool)isLongLivedCallbackRelayOperation;
- (void)main;
- (void)operationWithID:(id)arg1 receivedCallback:(id)arg2;
- (bool)shouldCheckAppVersion;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;

@end
