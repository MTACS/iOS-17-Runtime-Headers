
@interface SFScreenTimeOverlayViewController : UIViewController <TabSnapshotContentProvider> {
    double  _additionalVerticalSafeAreaMargin;
    STBlockingViewController * _blockingViewController;
    <SFScreenTimeOverlayViewControllerDelegate> * _delegate;
    NSURL * _url;
}

@property (nonatomic) double additionalVerticalSafeAreaMargin;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFScreenTimeOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *snapshotBackgroundColor;
@property (nonatomic, readonly) UIImage *snapshotContentImage;
@property (nonatomic, readonly) bool snapshotContentShouldUnderlapTopBackdrop;
@property (nonatomic, readonly) UIView *snapshotContentView;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (void).cxx_destruct;
- (void)_blockingViewDidHide:(id)arg1;
- (void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)arg1;
- (double)additionalVerticalSafeAreaMargin;
- (id)delegate;
- (void)hideBlockingViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)setAdditionalVerticalSafeAreaMargin:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)showBlockingViewControllerForURL:(id)arg1 withPolicy:(long long)arg2 animated:(bool)arg3;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (id)snapshotBackgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotContentRectInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snapshotContentView;

@end
