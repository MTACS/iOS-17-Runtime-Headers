
@interface AAUIServerUIHookHandler : RUIServerHookHandler {
    AAUIServerHookHandlerDelegate * _delegate;
    UIViewController * _presentingControllerOverride;
}

@property (nonatomic, retain) UIViewController *presentingControllerOverride;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (void).cxx_destruct;
- (id)init;
- (id)presentingControllerOverride;
- (void)setPresentingControllerOverride:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

+ (id)fcui_defaultFresnoServerHooks;

@end
