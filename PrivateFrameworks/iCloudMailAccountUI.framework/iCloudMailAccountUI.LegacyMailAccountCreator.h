
@interface iCloudMailAccountUI.LegacyMailAccountCreator : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {
    void $__lazy_storage_$_navigationController;
    void $__lazy_storage_$_ruiLoader;
    void accountStore;
    void appleAccount;
    void completionHandler;
    void objectModels;
    void presenter;
}

- (void).cxx_destruct;
- (id)init;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 forRequest:(id)arg3;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)sessionConfigurationForLoader:(id)arg1;
- (long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;

@end
