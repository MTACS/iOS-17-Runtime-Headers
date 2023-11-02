
@interface LAPSFetchNewPasscodeViewControllerOutput : NSObject {
    bool  _isPasscodeRecoveryEnabled;
    LAPSPasscode * _passcode;
}

@property (nonatomic) bool isPasscodeRecoveryEnabled;
@property (nonatomic, retain) LAPSPasscode *passcode;

- (void).cxx_destruct;
- (bool)isPasscodeRecoveryEnabled;
- (id)passcode;
- (void)setIsPasscodeRecoveryEnabled:(bool)arg1;
- (void)setPasscode:(id)arg1;

@end
