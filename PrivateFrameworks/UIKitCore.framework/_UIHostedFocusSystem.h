
@interface _UIHostedFocusSystem : UIFocusSystem {
    bool  _didSetFocusSoundGenerator;
    <UIFocusEnvironment> * _hostEnvironment;
}

@property (getter=_delegate, setter=_setDelegate:, nonatomic) <_UIHostedFocusSystemDelegate> *delegate;
@property (nonatomic, readonly) <UIFocusEnvironment> *hostEnvironment;

- (void).cxx_destruct;
- (id)_delegate;
- (id)_focusSoundGenerator;
- (bool)_focusSystemIsValid;
- (id)_hostFocusSystem;
- (id)_initWithHostEnvironment:(id)arg1;
- (bool)_isEligibleForFocusInteraction;
- (bool)_isEligibleForFocusOcclusion;
- (bool)_postsFocusUpdateNotifications;
- (bool)_prefersDeferralForFocusUpdateInContext:(id)arg1;
- (bool)_requiresFocusedItemToHaveContainingView;
- (void)_setDelegate:(id)arg1;
- (void)_setFocusSoundGenerator:(id)arg1;
- (bool)containsChildOfHostEnvironment:(id)arg1;
- (id)hostEnvironment;

@end
