
@interface APRequestHandler : NSObject

+ (void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
+ (void)checkDownloadQueueWithContentType:(long long)arg1;
+ (void)didReceiveStorePushNotificationWithPayload:(id)arg1;
+ (void)getCachedRequestsWithCompletion:(id /* block */)arg1;
+ (void)getMatchingRequestsWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)getRequestWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)presentApprovalSheetWithRequestIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 approve:(id)arg3 decline:(id)arg4 itemIdentifier:(id)arg5 previewURL:(id)arg6 offerName:(id)arg7 requestString:(id)arg8 requestSummary:(id)arg9 priceSummary:(id)arg10;
+ (void)resetAccountWithType:(long long)arg1;
+ (void)restartAPNSConnection;
+ (void)startDaemon;
+ (void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(id /* block */)arg3;

@end
