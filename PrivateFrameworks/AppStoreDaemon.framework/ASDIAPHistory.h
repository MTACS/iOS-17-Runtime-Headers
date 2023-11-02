
@interface ASDIAPHistory : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)getAllIAPsForActiveAccountWithResultHandler:(id /* block */)arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)init;
- (void)refreshIAPsForActiveAccountWithCompletionHandler:(id /* block */)arg1;

@end
