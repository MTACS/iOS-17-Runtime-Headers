
@interface LTUIErrorViewController : UINavigationController

- (bool)_canShowWhileLocked;
- (void)_updateBackground;
- (void)drawCloseButton;
- (id)initWithError:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
