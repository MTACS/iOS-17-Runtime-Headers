
@interface CSMagSafeAccessoryTrayViewController : CSMagSafeAccessoryViewController {
    bool  _isAnimatingPresentation;
    CSMagSafeAccessoryTrayView * _trayView;
}

@property (nonatomic) bool isAnimatingPresentation;
@property (nonatomic, retain) CSMagSafeAccessoryTrayView *trayView;

- (void).cxx_destruct;
- (id)_trayColorForAccessory:(id)arg1;
- (id)accessoryView;
- (double)animationDurationBeforeDismissal;
- (id)initWithAccessory:(id)arg1;
- (bool)isAnimatingPresentation;
- (void)setIsAnimatingPresentation:(bool)arg1;
- (void)setTrayView:(id)arg1;
- (id)trayView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
