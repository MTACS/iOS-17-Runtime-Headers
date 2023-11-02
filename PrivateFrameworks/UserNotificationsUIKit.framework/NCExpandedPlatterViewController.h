
@interface NCExpandedPlatterViewController : UIViewController <NCExpandedPlatterObservable, NCExpandedPlatterObserving, NCExpandedPlatterViewDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterDismissing, PLExpandedPlatterPresentable> {
    UIViewController<NCNotificationCustomContent> * _customContentViewController;
    <NCExpandedPlatterViewControllerDelegate> * _delegate;
    NSString * _dismissalReason;
    <PLExpandedPlatterDismissing> * _dismisser;
    int  _expandedPlatterPresentationState;
    NCNotificationRequest * _notificationRequest;
    NSHashTable * _observers;
    id /* block */  _pendingPresentationTransitionDidEndBlock;
    <NCNotificationStaticContentProviding> * _staticContentProvider;
}

@property (nonatomic, readonly) UIViewController<NCNotificationCustomContent> *customContentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCExpandedPlatterViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PLExpandedPlatterDismissing> *dismisser;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:, nonatomic, copy) id /* block */ pendingPresentationTransitionDidEndBlock;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)_canTransitionToPlatterPresentationState:(int)arg1;
- (id)_expandedPlatterView;
- (id)_expandedPlatterViewIfLoaded;
- (id)_expandedPlatterViewLoadingIfNecessary:(bool)arg1;
- (void)_handleDefaultTap:(id)arg1;
- (struct CGSize { double x1; double x2; })_maximumPlatterSize;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id /* block */)_pendingPresentationTransitionDidEndBlock;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSize;
- (void)_setCustomContentViewController:(id)arg1;
- (void)_setPendingPresentationTransitionDidEndBlock:(id /* block */)arg1;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupStaticContentProviderIfNecessary;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredCustomContentSize;
- (void)_updateScreenCaptureProhibited;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (void)addExpandedPlatterObserver:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (void)customContent:(id)arg1 didUpdateUserNotificationActions:(id)arg2;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)customContentDidUpdateTitle:(id)arg1;
- (void)customContentRequestsDefaultAction:(id)arg1;
- (void)customContentRequestsDismiss:(id)arg1;
- (id)customContentViewController;
- (id)delegate;
- (id)dismisser;
- (void)expandedPlatter:(id)arg1 didDismissWithReason:(id)arg2;
- (void)expandedPlatter:(id)arg1 willDismissWithReason:(id)arg2;
- (void)expandedPlatterDidPresent:(id)arg1;
- (void)expandedPlatterPresentable:(id)arg1 requestsDismissalWithTrigger:(long long)arg2;
- (void)expandedPlatterView:(id)arg1 requestsInteractionWithURL:(id)arg2;
- (bool)expandedPlatterView:(id)arg1 tapGestureRecognizerShouldReceiveTouch:(id)arg2;
- (void)expandedPlatterWillPresent:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 customContentViewController:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (id)notificationRequest;
- (void)playMedia;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeExpandedPlatterObserver:(id)arg1;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setDismisser:(id)arg1;
- (void)setNotificationRequest:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)userInteractionDidEndForExpandedPlatter:(id)arg1;
- (void)userInteractionWillBeginForExpandedPlatter:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
