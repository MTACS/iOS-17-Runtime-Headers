
@interface AXUISoftwareKeyboardManager : NSObject {
    <AXUISoftwareKeyboardManagerDelegate> * _delegate;
    NSMutableSet * _reasonsToDisableSoftwareKeyboard;
    NSMutableSet * _reasonsToEnableSoftwareKeyboard;
}

@property (nonatomic) <AXUISoftwareKeyboardManagerDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_overrideSetHardwareKeyboardAttached:(bool)arg1;
- (void)_setIsHardwareKeyboardAttached:(bool)arg1;
- (void)_updateHardwareKeyboardState;
- (void)_wst_setIsHardwareKeyboardAttached:(id)arg1;
- (void)addReasonToDisableSoftwareKeyboard:(id)arg1;
- (void)addReasonToEnableSoftwareKeyboard:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isHardwareKeyboardAttached;
- (void)removeReasonToDisableSoftwareKeyboard:(id)arg1;
- (void)removeReasonToEnableSoftwareKeyboard:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsHardwareKeyboardAttached:(bool)arg1;
- (void)updateKeyboardHardwareState;

@end
