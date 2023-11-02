
@interface ConversationKit.SharedContentViewController : UIViewController <CNKFaceTimePiPSourceProviding, CNKScreenSharingStateObserving, CNKSharedContentPippable, CNKSharedContentSourceInfoProviding, UIScrollViewDelegate> {
    void avatarImageQueue;
    void delegate;
    void isPipped;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  participant;
    void previousScreenSnapshot;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previousViewModel;
    void scrollView;
    void sharedContentView;
}

@property (nonatomic) bool isPipped;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRestoreAnimation;
- (void)getSharedContentSourceAvatarWithImageHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isPipped;
- (struct CGSize { double x1; double x2; })preferredPiPContentAspectRatio;
- (bool)restoreViewControllerHierarchyWhenExitingPiP;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setIsPipped:(bool)arg1;
- (id)sharedContentSourceName;
- (id)viewControllerForPiP;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
