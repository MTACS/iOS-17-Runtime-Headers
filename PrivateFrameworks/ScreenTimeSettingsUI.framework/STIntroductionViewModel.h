
@interface STIntroductionViewModel : NSObject {
    STAllowance * _allowance;
    NSNumber * _appAndWebsiteActivityEnabled;
    STDeviceBedtime * _bedtime;
    NSNumber * _communicationSafetyEnabled;
    bool  _deviceForChild;
    NSString * _parentalControlsPasscode;
    NSString * _recoveryAltDSID;
    NSDictionary * _restrictions;
    NSNumber * _screenDistanceEnabled;
}

@property (retain) STAllowance *allowance;
@property (copy) NSNumber *appAndWebsiteActivityEnabled;
@property (retain) STDeviceBedtime *bedtime;
@property (retain) NSNumber *communicationSafetyEnabled;
@property bool deviceForChild;
@property (retain) NSString *parentalControlsPasscode;
@property (copy) NSString *recoveryAltDSID;
@property (copy) NSDictionary *restrictions;
@property (retain) NSNumber *screenDistanceEnabled;

- (void).cxx_destruct;
- (id)allowance;
- (id)appAndWebsiteActivityEnabled;
- (id)bedtime;
- (id)communicationSafetyEnabled;
- (bool)deviceForChild;
- (id)parentalControlsPasscode;
- (id)recoveryAltDSID;
- (id)restrictions;
- (id)screenDistanceEnabled;
- (void)setAllowance:(id)arg1;
- (void)setAppAndWebsiteActivityEnabled:(id)arg1;
- (void)setBedtime:(id)arg1;
- (void)setCommunicationSafetyEnabled:(id)arg1;
- (void)setDeviceForChild:(bool)arg1;
- (void)setParentalControlsPasscode:(id)arg1;
- (void)setRecoveryAltDSID:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setScreenDistanceEnabled:(id)arg1;

@end
