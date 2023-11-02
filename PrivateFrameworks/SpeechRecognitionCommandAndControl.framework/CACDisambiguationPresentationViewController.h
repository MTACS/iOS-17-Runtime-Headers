
@interface CACDisambiguationPresentationViewController : UIViewController <CACViewController> {
    UIAlertController * _alertController;
    NSString * _alertTitle;
    <CACContactDisambiguationPresentationViewControllerDelegate> * _contactDisambiguationDelegate;
    NSArray * _disambiguationItems;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, readonly) NSString *alertTitle;
@property (nonatomic) <CACContactDisambiguationPresentationViewControllerDelegate> *contactDisambiguationDelegate;
@property (nonatomic, retain) NSArray *disambiguationItems;
@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, readonly) long long zOrder;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)actionForItem:(id)arg1;
- (id)alertController;
- (id)alertTitle;
- (id)contactDisambiguationDelegate;
- (id)disambiguationItems;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (bool)isOverlay;
- (id)newActionCustomContentView:(id)arg1;
- (id)newAlertControllerWithTitle:(id)arg1 message:(id)arg2;
- (void)performHideWithCompletion:(id /* block */)arg1;
- (void)setAlertController:(id)arg1;
- (void)setContactDisambiguationDelegate:(id)arg1;
- (void)setDisambiguationItems:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)zOrder;

@end
