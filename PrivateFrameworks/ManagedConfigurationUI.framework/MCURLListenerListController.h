
@interface MCURLListenerListController : PSListController

+ (id)originalURLSender;
+ (void)setOriginalURLSender:(id)arg1;

- (void)_presentNextController:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_pushProfileDetailsForProfileWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_showSheetToInstallConfigurationProfileFromInstallationQueueWithCompletion:(id /* block */)arg1;
- (void)_showSheetToInstallConfigurationProfileFromPurgatoryWithCompletion:(id /* block */)arg1;
- (void)_showSheetToInstallConfigurationProfileWithData:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)handleURL:(id)arg1;

@end
