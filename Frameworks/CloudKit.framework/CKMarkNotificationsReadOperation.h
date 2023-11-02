
@interface CKMarkNotificationsReadOperation : CKOperation <CKMarkNotificationsReadOperationCallbacks> {
    NSMutableDictionary * _errorsByNotificationID;
    id /* block */  _markNotificationsReadCompletionBlock;
    NSArray * _notificationIDs;
    NSMutableArray * _notificationIDsMarkedRead;
}

@property (nonatomic, readonly) <CKMarkNotificationsReadOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *errorsByNotificationID;
@property (nonatomic, copy) id /* block */ markNotificationsReadCompletionBlock;
@property (nonatomic, copy) NSArray *notificationIDs;
@property (nonatomic, retain) NSMutableArray *notificationIDsMarkedRead;
@property (nonatomic, readonly) CKMarkNotificationsReadOperationInfo *operationInfo;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)errorsByNotificationID;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleMarkNotificationReadCompletionForNotificationID:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;
- (id /* block */)markNotificationsReadCompletionBlock;
- (id)notificationIDs;
- (id)notificationIDsMarkedRead;
- (void)setErrorsByNotificationID:(id)arg1;
- (void)setMarkNotificationsReadCompletionBlock:(id /* block */)arg1;
- (void)setNotificationIDs:(id)arg1;
- (void)setNotificationIDsMarkedRead:(id)arg1;

@end
