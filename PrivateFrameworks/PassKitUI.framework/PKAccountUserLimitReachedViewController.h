
@interface PKAccountUserLimitReachedViewController : PKExplanationViewController {
    PKAccount * _account;
    NSNumberFormatter * _maximumAccountUsersFormatter;
}

- (void).cxx_destruct;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)initWithAccount:(id)arg1 context:(long long)arg2;
- (void)viewDidLoad;

@end
