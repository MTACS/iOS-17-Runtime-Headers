
@interface iCloudMailAccountProviderSwift : NSObject {
    void $__lazy_storage_$_legacyMailCreator;
    void accountStore;
    void appleAccount;
    void presenter;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithPresenter:(id)arg1 appleAccount:(id)arg2 accountStore:(id)arg3;
- (void)presentWith:(id /* block */)arg1;
- (void)presentWith:(bool)arg1 completion:(id /* block */)arg2;

@end
