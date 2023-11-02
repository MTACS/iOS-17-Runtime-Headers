
@interface UIKeyboardInputModeIndicatorController : NSObject {
    <UIKeyboardInputModeIndicatorControllerDelegate> * _delegate;
    UIDelayedAction * _dismissAction;
    UIDelayedAction * _idleAction;
}

@property (nonatomic) <UIKeyboardInputModeIndicatorControllerDelegate> *delegate;
@property (nonatomic, retain) UIDelayedAction *dismissAction;
@property (nonatomic, retain) UIDelayedAction *idleAction;

+ (bool)enabled;

- (void).cxx_destruct;
- (void)clear;
- (id)delegate;
- (id)dismissAction;
- (void)dismissIndicator;
- (bool)enabled;
- (void)hardwareKeyboardDettached;
- (void)idle;
- (id)idleAction;
- (void)inputModeChanged;
- (void)inputModeSelectorDidOpen;
- (id)inputModeUpdateTime;
- (void)keyPressed;
- (void)keyboardWindowEnabled:(bool)arg1;
- (void)presentIndicatorWithReason:(id)arg1 force:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setIdleAction:(id)arg1;
- (void)showIndicatorWithReason:(id)arg1 force:(bool)arg2;
- (void)willResignActive;

@end
