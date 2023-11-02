
@interface ASDRestoreService : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)clearFollowupsForAccountID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)estimateTotalDownloadSizeWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)prioritizeBundleIDs:(id)arg1 userInitiated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;

@end
