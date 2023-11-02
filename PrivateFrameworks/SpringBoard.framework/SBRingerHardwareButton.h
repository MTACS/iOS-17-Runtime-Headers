
@interface SBRingerHardwareButton : NSObject <PTSettingsKeyObserver, SBHIDButtonStateDelegate, SBHardwareButtonColluding, SBSystemActionControlObserver, SBSystemActionSuppressionManagerObserver> {
    <BSInvalidatable> * _buttonActiveAssertion;
    SBHIDButtonStateArbiter * _buttonArbiter;
    SBHardwareButtonCoordinator * _hardwareButtonCoordinator;
    bool  _inhibitActions;
    id /* block */  _overrideButtonUpHandler;
    SBRingerButtonParameters * _parameters;
    SBRingerHardwareButtonSettings * _settings;
    SBSystemActionSuppressionManager * _suppressionManager;
    SBSystemActionControl * _systemActionControl;
    <BSInvalidatable> * _systemActionPerformedInteractionAssertion;
    <BSInvalidatable> * _systemActionPreviewingAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBHardwareButtonCoordinator *hardwareButtonCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)cancelHardwareButtonPress;
- (id)hardwareButtonCoordinator;
- (id)hardwareButtonIdentifier;
- (id)init;
- (void)performActionsForButtonDown:(id)arg1;
- (void)performActionsForButtonLongPress:(id)arg1;
- (void)performActionsForButtonUp:(id)arg1;
- (void)setHardwareButtonCoordinator:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)systemActionControlDidUpdateActionInteractionConfiguration:(id)arg1;
- (void)systemActionSuppressionManager:(id)arg1 didUpdateSuppressionStatus:(id)arg2;

@end
