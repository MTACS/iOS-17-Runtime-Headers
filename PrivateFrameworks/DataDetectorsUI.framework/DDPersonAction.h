
@interface DDPersonAction : DDRemoteAction {
    BCSBusinessItem * _bizItem;
    bool  _bizItemIsMessageable;
    bool  _contactExists;
    bool  _fromCNContact;
    NSString * _lastBizNumberFetched;
    UIViewController * _menuHeaderViewController;
}

+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;
+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5;
- (id)_menuActionsForBusinessWithNumber:(id)arg1;
- (id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)menuActions;
- (bool)menuHasHeaderView;
- (id)menuHeaderView;
- (id)menuHeaderViewController;
- (bool)phoneNumberIsBusiness:(id)arg1;
- (bool)prefersActionMenuStyle;
- (struct CGSize { double x1; double x2; })suggestedContentSize;

@end
