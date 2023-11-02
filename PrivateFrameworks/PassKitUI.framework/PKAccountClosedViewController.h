
@interface PKAccountClosedViewController : PKExplanationViewController {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKFamilyMemberCollection * _familyMemberCollection;
}

- (void).cxx_destruct;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithAccount:(id)arg1 accountUserCollection:(id)arg2 familyMemberCollection:(id)arg3 context:(long long)arg4;
- (void)viewDidLoad;

@end
