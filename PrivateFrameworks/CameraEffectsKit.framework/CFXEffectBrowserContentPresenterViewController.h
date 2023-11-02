
@interface CFXEffectBrowserContentPresenterViewController : UIViewController <CFXEffectBrowserContentPresenterDelegate> {
    <CFXEffectBrowserContentPresenterViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXEffectBrowserContentPresenterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)CFX_alwaysExpandedAppHeight;
- (id)CFX_constraintsForAlwaysExpandedAppView:(id)arg1 containerView:(id)arg2;
- (void)configureEffectBrowserContentPresentationForOrientation:(long long)arg1;
- (id)delegate;
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (struct CGSize { double x1; double x2; })expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1;
- (void)loadView;
- (void)setDelegate:(id)arg1;

@end
