
@interface LAPSFetchNewPasscodeRequest : NSObject {
    NSOrderedSet * _allowedPasscodeTypes;
    bool  _isPasscodeRecoveryEnabled;
    bool  _isPasscodeRecoveryRestricted;
    bool  _isPasscodeRecoverySupported;
    LAPSPasscodeType * _passcodeType;
}

@property (nonatomic, retain) NSOrderedSet *allowedPasscodeTypes;
@property (nonatomic) bool isPasscodeRecoveryEnabled;
@property (nonatomic) bool isPasscodeRecoveryRestricted;
@property (nonatomic) bool isPasscodeRecoverySupported;
@property (nonatomic, retain) LAPSPasscodeType *passcodeType;

- (void).cxx_destruct;
- (id)allowedPasscodeTypes;
- (id)init;
- (bool)isPasscodeRecoveryEnabled;
- (bool)isPasscodeRecoveryRestricted;
- (bool)isPasscodeRecoverySupported;
- (id)passcodeType;
- (void)setAllowedPasscodeTypes:(id)arg1;
- (void)setIsPasscodeRecoveryEnabled:(bool)arg1;
- (void)setIsPasscodeRecoveryRestricted:(bool)arg1;
- (void)setIsPasscodeRecoverySupported:(bool)arg1;
- (void)setPasscodeType:(id)arg1;

@end
