
@interface MKLookAroundFullScreenViewController : UIViewController {
    UIView * _contentView;
    <MKLookAroundFullScreenViewControllerDelegate> * _delegate;
    unsigned long long  _originalAutoresizingMask;
}

@property (nonatomic) UIView *contentView;
@property (nonatomic) <MKLookAroundFullScreenViewControllerDelegate> *delegate;
@property (nonatomic) unsigned long long originalAutoresizingMask;

- (void).cxx_destruct;
- (void)attachContentView;
- (id)contentView;
- (id)delegate;
- (void)detachContentView;
- (unsigned long long)originalAutoresizingMask;
- (long long)overrideUserInterfaceStyle;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOriginalAutoresizingMask:(unsigned long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
