
@interface iCloudMailAccountProvider : NSObject {
    iCloudMailAccountProviderSwift * provider;
}

- (void).cxx_destruct;
- (id)initWithAccountStore:(id)arg1 appleAccount:(id)arg2 presenter:(id)arg3;
- (void)presentWithAlert:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)presentWithCompletionHandler:(id /* block */)arg1;

@end
