
@interface VSViewControllerFactory : NSObject {
    NSOperationQueue * _privateQueue;
}

@property (nonatomic, retain) NSOperationQueue *privateQueue;

+ (id)sharedFactory;

- (void).cxx_destruct;
- (id)authenticationViewControllerForViewModel:(id)arg1;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (id)init;
- (id)loadingViewController;
- (id)privateQueue;
- (void)setPrivateQueue:(id)arg1;
- (id)viewControllerForAppsSupportedByIdentityProvider:(id)arg1 supportedApps:(id)arg2 delegate:(id)arg3;
- (id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg1 grantingVouchers:(bool)arg2 appleAccountName:(id)arg3 identityProvider:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)viewControllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 storage:(id)arg3 acknowledgementHandler:(id /* block */)arg4;
- (id)viewControllerToConfirmAccountDeletionForAccount:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(id /* block */)arg3;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(id /* block */)arg1;
- (void)viewServiceRemoteViewControllerWithCompletion:(id /* block */)arg1;

@end
