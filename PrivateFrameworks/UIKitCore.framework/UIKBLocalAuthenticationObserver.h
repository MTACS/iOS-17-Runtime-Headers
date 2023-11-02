
@interface UIKBLocalAuthenticationObserver : NSObject {
    <UIKeyInput> * _delegateResignedDuringLocalAuthentication;
    bool  _inputUIResuming;
    bool  _isListeningForLAUINotifications;
    bool  _isRestoringInputViews;
    bool  _isRestoringPreLocalAuthenticationDelegate;
    bool  _localAuthenticationPresented;
    NSUUID * _uuidOfDelegateResignedDuringLocalAuthentication;
    NSUUID * _uuidOfSessionEndedDuringLocalAuthentication;
}

@property (nonatomic) <UIKeyInput> *delegateResignedDuringLocalAuthentication;
@property (nonatomic) bool inputUIResuming;
@property (nonatomic) bool isRestoringInputViews;
@property (nonatomic) bool isRestoringPreLocalAuthenticationDelegate;
@property bool localAuthenticationPresented;
@property (nonatomic, retain) NSUUID *uuidOfDelegateResignedDuringLocalAuthentication;
@property (nonatomic, retain) NSUUID *uuidOfSessionEndedDuringLocalAuthentication;

- (void).cxx_destruct;
- (void)_applicationResumed:(id)arg1;
- (bool)_applicationStateIsActive;
- (void)_localAuthenticationDismissed;
- (void)_localAuthenticationPresented;
- (void)_startListeningForLAUINotificationsIfNeeded;
- (void)_stopListeningForLAUINotifications;
- (void)dealloc;
- (id)delegateResignedDuringLocalAuthentication;
- (void)didTryToBecomeFirstResponder:(id)arg1;
- (id)init;
- (void)inputDelegateWillTeardown:(id)arg1 sessionUUID:(id)arg2;
- (bool)inputUIResuming;
- (bool)isRestoringInputViews;
- (bool)isRestoringPreLocalAuthenticationDelegate;
- (bool)localAuthenticationPresented;
- (bool)localAuthenticationPresentedOrBeingRecoveredFrom;
- (id)sessionIDForInputDelegate:(id)arg1;
- (void)setDelegateResignedDuringLocalAuthentication:(id)arg1;
- (void)setInputUIResuming:(bool)arg1;
- (void)setIsRestoringInputViews:(bool)arg1;
- (void)setIsRestoringPreLocalAuthenticationDelegate:(bool)arg1;
- (void)setLocalAuthenticationPresented:(bool)arg1;
- (void)setUuidOfDelegateResignedDuringLocalAuthentication:(id)arg1;
- (void)setUuidOfSessionEndedDuringLocalAuthentication:(id)arg1;
- (id)uuidOfDelegateResignedDuringLocalAuthentication;
- (id)uuidOfSessionEndedDuringLocalAuthentication;
- (void)willTryToBecomeFirstResponder:(id)arg1;

@end
