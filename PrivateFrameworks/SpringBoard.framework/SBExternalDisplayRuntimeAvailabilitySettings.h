
@interface SBExternalDisplayRuntimeAvailabilitySettings : PTSettings {
    bool  _requireHardwareKeyboard;
    bool  _requirePointer;
}

@property (nonatomic, readonly) long long extendedDisplayRequirements;
@property (nonatomic) bool requireHardwareKeyboard;
@property (nonatomic) bool requirePointer;

+ (id)_moduleWithSectionTitle:(id)arg1;
+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (long long)extendedDisplayRequirements;
- (bool)requireHardwareKeyboard;
- (bool)requirePointer;
- (void)setDefaultValues;
- (void)setRequireHardwareKeyboard:(bool)arg1;
- (void)setRequirePointer:(bool)arg1;

@end
