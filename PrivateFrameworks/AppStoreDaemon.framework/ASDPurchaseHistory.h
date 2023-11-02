
@interface ASDPurchaseHistory : NSObject <ASDServiceProvider> {
    int  _databaseChangedNotificationToken;
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)executeQuery:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)init;
- (void)setHidden:(bool)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)showAllWithCompletionHandler:(id /* block */)arg1;
- (void)updateForAccountID:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)updateWithCompletionHandler:(id /* block */)arg1;
- (void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;

@end
