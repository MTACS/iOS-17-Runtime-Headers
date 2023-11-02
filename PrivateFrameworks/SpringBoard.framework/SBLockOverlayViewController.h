
@interface SBLockOverlayViewController : UIViewController {
    <SBLockOverlayViewControllerDelegate> * _delegate;
}

@property (nonatomic) <SBLockOverlayViewControllerDelegate> *delegate;
@property (nonatomic, readonly) bool shouldBeHidden;

- (void).cxx_destruct;
- (id)delegate;
- (id)overlayView;
- (void)setDelegate:(id)arg1;
- (bool)shouldBeHidden;

@end
