
@interface SBUISystemApertureElementSourceContainerViewController : UIViewController {
    UIViewController<SBUISystemApertureElement> * _elementViewController;
}

@property (nonatomic, retain) UIViewController<SBUISystemApertureElement> *elementViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_childViewControllerForAlwaysOnTimelines;
- (id)_transitionCoordinator;
- (id)elementViewController;
- (void)setElementViewController:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;

@end
