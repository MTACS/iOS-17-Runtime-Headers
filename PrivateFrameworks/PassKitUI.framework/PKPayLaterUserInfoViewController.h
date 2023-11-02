
@interface PKPayLaterUserInfoViewController : PKPayLaterViewController <PKPayLaterUserInfoSectionControllerDelegate, PKSetupFlowControllerProtocol> {
    PKApplyController * _applyController;
    PKPayLaterUserInfoSectionController * _sectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didUpdatePayLaterAccount:(id)arg1;
- (id)initWithPayLaterAccount:(id)arg1;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (id)pageTag;
- (void)updateUserInfoForType:(long long)arg1 completion:(id /* block */)arg2;
- (void)viewDidLoad;

@end
