
@interface LAPSFetchNewPasscodeResult : NSObject {
    bool  _isPasscodeRecoveryEnabled;
    LAPSPasscode * _passcode;
}

@property (nonatomic, readonly) bool isPasscodeRecoveryEnabled;
@property (nonatomic, readonly) LAPSPasscode *passcode;

- (void).cxx_destruct;
- (id)initWithPasscode:(id)arg1 isPasscodeRecoveryEnabled:(bool)arg2;
- (id)initWithRawPasscode:(id)arg1;
- (id)initWithRawPasscode:(id)arg1 isPasscodeRecoveryEnabled:(bool)arg2;
- (bool)isPasscodeRecoveryEnabled;
- (id)passcode;

@end
