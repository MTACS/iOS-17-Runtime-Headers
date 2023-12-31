
@interface PKPassPersonalizationTermsViewController : UIViewController {
    <PKPassPersonalizationTermsViewControllerDelegate> * _delegate;
    NSString * _termsAndConditions;
    UITextView * _textView;
}

@property (nonatomic) <PKPassPersonalizationTermsViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *termsAndConditions;

- (void).cxx_destruct;
- (void)_acceptButtonPressed:(id)arg1;
- (void)_applyTermsAndConditions;
- (void)_declineButtonPressed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithTermsAndConditions:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setTermsAndConditions:(id)arg1;
- (id)termsAndConditions;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
