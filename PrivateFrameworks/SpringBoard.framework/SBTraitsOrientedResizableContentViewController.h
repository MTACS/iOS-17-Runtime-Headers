
@interface SBTraitsOrientedResizableContentViewController : SBFTouchPassThroughViewController {
    SBTraitsOrientedContentViewController * _contentViewController;
    <SBResizableContentViewControllerDelegate> * _delegate;
}

- (void).cxx_destruct;
- (id)contentViewController;
- (id)initWithContentViewController:(id)arg1 delegate:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
