
@interface SBVoiceCommandButton : NSObject <SBHIDButtonStateDelegate, SBHardwareButtonColluding> {
    SBHIDButtonStateArbiter * _buttonArbiter;
    SBHardwareButtonCoordinator * _hardwareButtonCoordinator;
    bool  _isLongPressRecognized;
    SBSiriHardwareButtonInteraction * _siriHardwareButtonInteraction;
}

@property (nonatomic, retain) SBHIDButtonStateArbiter *buttonArbiter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBHardwareButtonCoordinator *hardwareButtonCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLongPressRecognized;
@property (nonatomic, retain) SBSiriHardwareButtonInteraction *siriHardwareButtonInteraction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isPermittedToBegin;
- (id)buttonArbiter;
- (void)cancelHardwareButtonPress;
- (void)handleButtonEvent:(struct __IOHIDEvent { }*)arg1;
- (id)hardwareButtonCoordinator;
- (id)hardwareButtonIdentifier;
- (id)init;
- (bool)isLongPressRecognized;
- (void)performActionsForButtonDown:(id)arg1;
- (void)performActionsForButtonLongPress:(id)arg1;
- (void)performActionsForButtonUp:(id)arg1;
- (void)setButtonArbiter:(id)arg1;
- (void)setHardwareButtonCoordinator:(id)arg1;
- (void)setIsLongPressRecognized:(bool)arg1;
- (void)setSiriHardwareButtonInteraction:(id)arg1;
- (id)siriHardwareButtonInteraction;

@end
