
@interface ASDPurchaseManager : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)adopt:(id)arg1;
- (id)adoptableBundleIdentifiers;
- (void)adoptionStatus:(bool)arg1 withReplyHandler:(id /* block */)arg2;
- (void)checkAutomaticDownloadQueue;
- (void)checkPendingQueue;
- (void)checkPreflightForItemIdentifier:(id)arg1 atURL:(id)arg2 withReplyHandler:(id /* block */)arg3;
- (id)init;
- (void)processPurchase:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)renewReceiptForApplicationAtURL:(id)arg1 withAppleID:(id)arg2 password:(id)arg3 forceSandbox:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)startPurchase:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)unadoptWithReplyHandler:(id /* block */)arg1;

@end
