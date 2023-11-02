
@interface CKBlackholeConversationListViewController : CKBlackholeConversationListCommonViewController <PSController> {
    UIViewController<PSController> * _parentController;
    PSRootController * _rootController;
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)handleURL:(id)arg1;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)parentController;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;

@end
