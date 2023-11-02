
@interface VSTwoFactorEntryViewController_iOS : UIViewController <UIScrollViewDelegate, VSTwoFactorDigitViewDelegate, VSTwoFactorEntryViewController> {
    NSArray * _buttons;
    bool  _cancellationAllowed;
    <VSAuthenticationViewControllerDelegate> * _delegate;
    VSTwoFactorDigitView * _digitView;
    VSFontCenter * _fontCenter;
    VSIdentityProviderLogoView * _logoView;
    UIScrollView * _scrollView;
    UIBarButtonItem * _verifyButton;
    VSTwoFactorEntryViewModel * _viewModel;
}

@property (nonatomic, retain) NSArray *buttons;
@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VSTwoFactorDigitView *digitView;
@property (nonatomic, retain) VSFontCenter *fontCenter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSIdentityProviderLogoView *logoView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredLogoSize;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIBarButtonItem *verifyButton;
@property (nonatomic, retain) VSTwoFactorEntryViewModel *viewModel;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (id)buttons;
- (void)dealloc;
- (id)delegate;
- (id)digitView;
- (id)fontCenter;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCancellationAllowed;
- (id)logoView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { double x1; double x2; })preferredLogoSize;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDigitView:(id)arg1;
- (void)setFontCenter:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setVerifyButton:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)startObservingViewModel:(id)arg1;
- (void)stopObservingViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)twoFactorDigitView:(id)arg1 textDidChange:(id)arg2;
- (id)verifyButton;
- (void)verifyButtonPressed:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
