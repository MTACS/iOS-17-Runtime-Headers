
@interface NCNotificationContentContainerViewController : UIViewController <NCNotificationCustomContent, NCNotificationTextInputViewDelegate, _UNNotificationContentExtensionHostContainerViewControllerDelegate> {
    unsigned long long  _customContentLocation;
    <NCNotificationCustomContentDelegate> * _delegate;
    _UNNotificationContentExtensionHostContainerViewController * _extensionContainerViewController;
    NCNotificationTextInputView * _inputAccessoryView;
    NCNotificationRequest * _notificationRequest;
    NSMutableArray * _updatedActions;
}

@property (nonatomic, readonly) NSString *contentExtensionIdentifier;
@property (nonatomic) unsigned long long customContentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationCustomContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UNNotificationContentExtensionHostContainerViewController *extensionContainerViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationTextInputView *inputAccessoryView;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSMutableArray *updatedActions;

+ (id)_defaultUIExtensionForNotificationRequest:(id)arg1 visibleAttachment:(out id*)arg2;
+ (id)_visibleAttachmentForNotificationRequest:(id)arg1;
+ (id)extensionForNotificationRequest:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_forwardActionToExtension:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)_loadExtensionContainerViewControllerForNotificationRequest:(id)arg1;
- (void)_removeInputAccessoryView:(id)arg1;
- (id)_responseForAction:(id)arg1 notification:(id)arg2 userInfo:(id)arg3;
- (void)_setupExtensionContainerViewControllerController:(id)arg1;
- (void)_setupQuickReplyForNotificationAction:(id)arg1;
- (void)_setupQuickReplyForNotificationRequest:(id)arg1;
- (id)_textInputActionInNotification:(id)arg1;
- (bool)allowManualDismiss;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)cancelTouches;
- (id)contentExtensionIdentifier;
- (unsigned long long)customContentLocation;
- (bool)defaultContentHidden;
- (id)delegate;
- (bool)didReceiveNotificationRequest:(id)arg1;
- (id)extensionContainerViewController;
- (void)extensionViewControllerDidLoadExtension:(id)arg1;
- (void)extensionViewControllerDidUpdateActions:(id)arg1;
- (void)extensionViewControllerDidUpdateTitle:(id)arg1;
- (void)extensionViewControllerRequestsDefaultAction:(id)arg1;
- (void)extensionViewControllerRequestsDismiss:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (id)inputAccessoryView;
- (id)notificationRequest;
- (void)notificationTextInputView:(id)arg1 didConfirmText:(id)arg2 forAction:(id)arg3;
- (bool)overridesDefaultTitle;
- (bool)performAction:(id)arg1 forNotification:(id)arg2;
- (bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)playMedia;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preserveInputViews;
- (bool)restoreInputViews;
- (void)setCustomContentLocation:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtensionContainerViewController:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setUpdatedActions:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)title;
- (id)updatedActions;
- (bool)userInteractionEnabled;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
