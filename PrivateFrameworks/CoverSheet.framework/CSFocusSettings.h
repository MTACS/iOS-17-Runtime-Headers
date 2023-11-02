
@interface CSFocusSettings : PTSettings {
    bool  _gatesOnControlCenterAccess;
    bool  _requiresAuthWithoutControlCenterAccess;
}

@property (nonatomic) bool gatesOnControlCenterAccess;
@property (nonatomic) bool requiresAuthWithoutControlCenterAccess;

+ (id)settingsControllerModule;

- (bool)gatesOnControlCenterAccess;
- (bool)requiresAuthWithoutControlCenterAccess;
- (void)setDefaultValues;
- (void)setGatesOnControlCenterAccess:(bool)arg1;
- (void)setRequiresAuthWithoutControlCenterAccess:(bool)arg1;

@end
