
@interface AASignInOperationHelper : NSObject {
    ACAccountStore * _accountStore;
}

- (void).cxx_destruct;
- (void)_refreshEnabledDataclassesForAccount:(id)arg1;
- (void)_saveAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)signInAccount:(id)arg1 enablingDataclasses:(bool)arg2 completion:(id /* block */)arg3;

@end
