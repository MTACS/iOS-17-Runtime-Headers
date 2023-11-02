
@interface UIKeyboardCameraSession : NSObject <UIAdaptivePresentationControllerDelegate, UIDimmingViewDelegate, UIKeyboardCameraViewControllerDelegate, UITextInputSessionActionAnalyticsDelegateSource, UIViewControllerTransitioningDelegate> {
    <UIViewControllerAnimatedTransitioning> * _animationController;
    bool  _didCleanup;
    bool  _didFindText;
    bool  _isSecureFieldEditor;
    bool  _isSingleLineDocument;
    bool  _isTextInputResponder;
    bool  _isWebKitResponder;
    NSString * _keyboardCameraCandidateString;
    UIKeyboardCameraViewController * _keyboardCameraViewController;
    UIKeyboardCameraBasePresentationController * _presentationController;
    bool  _presentingOverKeyboard;
    UIResponder<UIKeyInput> * _responder;
    bool  _respondsToKeyboardInputShouldInsertText;
    id  _sender;
    UITextInputSessionActionAnalytics * _sessionAnalytics;
    bool  _shouldResignFirstResponderWhenDone;
    bool  _shouldSuppressSoftwareKeyboard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDismissing;
@property (nonatomic, readonly) bool isPresented;
@property (nonatomic, readonly) bool isPresenting;
@property (nonatomic, readonly) UIResponder<UIKeyInput> *responder;
@property (readonly) UITextInputSessionActionAnalytics *sessionAnalytics;
@property (nonatomic) bool shouldSuppressSoftwareKeyboard;
@property (readonly) Class superclass;

+ (id)_textContentTypesForDataDetection;
+ (id)activeSession;
+ (bool)isEnabled;
+ (id)keyboardCameraContentTypeForResponder:(id)arg1;
+ (id)sharedSession;
+ (bool)shouldShowTextSuggestionForResponder:(id)arg1;
+ (bool)updatesGuideDuringRotation;

- (void).cxx_destruct;
- (void)_addObservers;
- (void)_cleanupKeyboardCameraAndShouldInsertText:(bool)arg1;
- (id)_delegateAsResponder;
- (void)_didEnterBackground:(id)arg1;
- (void)_dismissKeyboardCamera;
- (void)_firstResponderDidChange:(id)arg1;
- (void)_inputModeDidChange:(id)arg1;
- (void)_keyboardAboutToHide:(id)arg1;
- (void)_keyboardCameraPreparationDidComplete;
- (void)_makeResponderEditableIfNecessary;
- (long long)_overrideTextInputSource;
- (id)_sessionIdentifier;
- (void)_show;
- (id)_textInputResponder;
- (void)_updatePreviewWithString:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)endActiveSession;
- (bool)isDismissing;
- (bool)isPresented;
- (bool)isPresenting;
- (void)keyboardCameraDidAccept;
- (void)keyboardCameraDidCancel;
- (void)keyboardCameraDidUpdateString:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)responder;
- (id)sessionAnalytics;
- (void)setShouldSuppressSoftwareKeyboard:(bool)arg1;
- (bool)shouldSuppressSoftwareKeyboard;
- (void)showForResponder:(id)arg1 sender:(id)arg2 rtiConfiguration:(id)arg3;

@end
