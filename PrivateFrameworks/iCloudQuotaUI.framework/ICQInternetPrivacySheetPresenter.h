
@interface ICQInternetPrivacySheetPresenter : NSObject {
    UINavigationController * _navigationController;
    UIViewController * _presentingViewController;
    ICQInternetPrivacySheet * _sheet;
}

@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) ICQInternetPrivacySheet *sheet;

+ (id)presenterWithIdentifier:(id)arg1 viewModel:(id)arg2;

- (void).cxx_destruct;
- (id)navigationController;
- (void)present;
- (id)presentingViewController;
- (void)setNavigationController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSheet:(id)arg1;
- (id)sheet;

@end
