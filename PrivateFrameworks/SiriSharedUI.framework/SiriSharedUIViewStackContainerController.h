
@interface SiriSharedUIViewStackContainerController : UIViewController

@property (nonatomic, readonly) SiriSharedUIViewStackContainer *viewStackContainer;

- (bool)_canShowWhileLocked;
- (void)loadView;
- (id)viewStackContainer;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
