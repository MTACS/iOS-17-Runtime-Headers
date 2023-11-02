
@interface CSMagSafeAccessoryWalletViewController : CSMagSafeAccessoryViewController {
    bool  _isAnimatingPresentation;
    CSMagSafeAccessoryWalletView * _walletView;
}

@property (nonatomic) bool isAnimatingPresentation;
@property (nonatomic, retain) CSMagSafeAccessoryWalletView *walletView;

- (void).cxx_destruct;
- (id)accessoryView;
- (double)animationDurationBeforeDismissal;
- (id)initWithAccessory:(id)arg1;
- (bool)isAnimatingPresentation;
- (void)setIsAnimatingPresentation:(bool)arg1;
- (void)setWalletView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)walletView;

@end
