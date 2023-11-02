
@interface CKSendMenuPresentation : NSObject <CKSendMenuPopoverPresentationControllerDelegate> {
    <CKSendMenuPresentationDelegate> * _delegate;
    bool  _hasRequestedKeyboardSnapshot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastAnchorViewRectInWindow;
    <CKSceneOverlayPresentationContext> * _overlayPresentationContext;
    CKSendMenuPopoverViewController * _popoverRootViewController;
    long long  _presentationState;
    UIViewController * _presentingViewController;
    CKSendMenuPopoverTransitioningDelegate * _sendMenuTransitioningDelegate;
    CKSendMenuViewController * _sendMenuViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSendMenuPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRequestedKeyboardSnapshot;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastAnchorViewRectInWindow;
@property (nonatomic, retain) <CKSceneOverlayPresentationContext> *overlayPresentationContext;
@property (nonatomic, retain) CKSendMenuPopoverViewController *popoverRootViewController;
@property (nonatomic) long long presentationState;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) CKSendMenuPopoverTransitioningDelegate *sendMenuTransitioningDelegate;
@property (nonatomic, retain) CKSendMenuViewController *sendMenuViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__dismissPopoverPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_beginFullscreenPresentationWithCompletion:(id /* block */)arg1;
- (void)_beginPopoverPresentationWithCompletion:(id /* block */)arg1;
- (void)_delegateDidDismissSendMenu;
- (void)_dismissFullscreenPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_dismissPopoverPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_layoutFullScreenSendMenuView;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)beginPresentationWithCompletion:(id /* block */)arg1;
- (void)chatControllerWillDisappear:(id)arg1;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)enforceSendMenuOrderingInWindowSubviews;
- (bool)hasRequestedKeyboardSnapshot;
- (void)informSendMenuOfAnchorViewPositionChangeIfNecessary;
- (id)initWithOverlayPresentationContext:(id)arg1 presentingViewController:(id)arg2 sendMenuViewController:(id)arg3 delegate:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastAnchorViewRectInWindow;
- (void)layout;
- (id)newPopoverLayoutMetrics;
- (id)overlayPresentationContext;
- (id)popoverRootViewController;
- (void)presentCardWithContentViewController:(id)arg1 style:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (long long)presentationState;
- (long long)presentationStyle;
- (id)presentingViewController;
- (void)rePresentSendMenu;
- (void)removeSendMenuFromViewHierarchy;
- (void)requestDismissKeyboardSnapshotForSendMenuIfNeeded;
- (void)sendMenuPresentationController:(id)arg1 didChangePopoverLayoutMetrics:(id)arg2;
- (void)sendMenuPresentationControllerWantsToBeDismissed:(id)arg1;
- (void)sendMenuPresentationControllerWillDismiss:(id)arg1;
- (id)sendMenuTransitioningDelegate;
- (id)sendMenuViewController;
- (void)setDelegate:(id)arg1;
- (void)setHasRequestedKeyboardSnapshot:(bool)arg1;
- (void)setLastAnchorViewRectInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverlayPresentationContext:(id)arg1;
- (void)setPopoverRootViewController:(id)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSendMenuTransitioningDelegate:(id)arg1;
- (void)setSendMenuViewController:(id)arg1;

@end
