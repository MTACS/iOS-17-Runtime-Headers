
@interface SBAccessibilityHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction> {
    unsigned long long  _buttonType;
}

@property (nonatomic, readonly) unsigned long long buttonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)hardwareButtonInteractionForHomeButton;
+ (id)hardwareButtonInteractionForLockButton;

- (void)_accessibilityPrefsDidChange;
- (double)_downToDownInterval;
- (bool)_presentMigrationAlertIfNeeded;
- (void)_registerAsNotificationObserver;
- (struct __CFString { }*)_speedChangedNotificationName;
- (bool)_supportsTripleClick;
- (void)_unregisterAsNotificationObserver;
- (unsigned long long)buttonType;
- (bool)consumeTriplePressUp;
- (void)dealloc;
- (id)hardwareButtonGestureParameters;
- (id)initWithButtonType:(unsigned long long)arg1;

@end
