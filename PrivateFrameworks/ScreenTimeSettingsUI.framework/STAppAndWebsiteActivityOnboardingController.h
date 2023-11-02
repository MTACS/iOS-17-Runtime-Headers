
@interface STAppAndWebsiteActivityOnboardingController : NSObject {
    id /* block */  _completionBlock;
    UINavigationController * _navigationController;
}

@property (copy) id /* block */ completionBlock;
@property (retain) UINavigationController *navigationController;

- (void).cxx_destruct;
- (void)_addTrayButtonToWelcomeController:(id)arg1 localizationKey:(id)arg2 action:(SEL)arg3 isBold:(bool)arg4;
- (id)_createAppAndWebsiteActivityController;
- (void)_notNowSelected;
- (void)_turnOnAppAndWebsiteActivitySelected;
- (id /* block */)completionBlock;
- (id)navigationController;
- (void)presentOverViewController:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setNavigationController:(id)arg1;

@end
