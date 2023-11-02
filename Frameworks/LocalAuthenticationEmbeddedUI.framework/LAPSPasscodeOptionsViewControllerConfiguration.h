
@interface LAPSPasscodeOptionsViewControllerConfiguration : NSObject {
    NSOrderedSet * _allowedPasscodeTypes;
    NSString * _cancelTitle;
    bool  _isPasscodeRecoveryEnabled;
    bool  _isPasscodeRecoveryOptionVisible;
    bool  _isPasscodeRecoveryRestricted;
    bool  _isPasscodeRecoverySupported;
    NSString * _passcodeRecoveryDisabledTitle;
    NSString * _passcodeRecoveryEnabledTitle;
    NSString * _passcodeRecoveryTitle;
    LAPSPasscodeType * _selectedPasscodeType;
    NSString * _title;
}

@property (nonatomic, retain) NSOrderedSet *allowedPasscodeTypes;
@property (nonatomic, retain) NSString *cancelTitle;
@property (nonatomic) bool isPasscodeRecoveryEnabled;
@property (nonatomic) bool isPasscodeRecoveryOptionVisible;
@property (nonatomic) bool isPasscodeRecoveryRestricted;
@property (nonatomic) bool isPasscodeRecoverySupported;
@property (nonatomic, retain) NSString *passcodeRecoveryDisabledTitle;
@property (nonatomic, retain) NSString *passcodeRecoveryEnabledTitle;
@property (nonatomic, retain) NSString *passcodeRecoveryTitle;
@property (nonatomic, retain) LAPSPasscodeType *selectedPasscodeType;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)allowedPasscodeTypes;
- (id)cancelTitle;
- (bool)isPasscodeRecoveryEnabled;
- (bool)isPasscodeRecoveryOptionVisible;
- (bool)isPasscodeRecoveryRestricted;
- (bool)isPasscodeRecoverySupported;
- (id)passcodeRecoveryDisabledTitle;
- (id)passcodeRecoveryEnabledTitle;
- (id)passcodeRecoveryTitle;
- (id)selectedPasscodeType;
- (void)setAllowedPasscodeTypes:(id)arg1;
- (void)setCancelTitle:(id)arg1;
- (void)setIsPasscodeRecoveryEnabled:(bool)arg1;
- (void)setIsPasscodeRecoveryOptionVisible:(bool)arg1;
- (void)setIsPasscodeRecoveryRestricted:(bool)arg1;
- (void)setIsPasscodeRecoverySupported:(bool)arg1;
- (void)setPasscodeRecoveryDisabledTitle:(id)arg1;
- (void)setPasscodeRecoveryEnabledTitle:(id)arg1;
- (void)setPasscodeRecoveryTitle:(id)arg1;
- (void)setSelectedPasscodeType:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
