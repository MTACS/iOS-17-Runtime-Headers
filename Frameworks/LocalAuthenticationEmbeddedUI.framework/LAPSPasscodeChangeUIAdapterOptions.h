
@interface LAPSPasscodeChangeUIAdapterOptions : NSObject {
    bool  _isPasscodeRecoveryOptionVisible;
    NSString * _oldPasscodePrompt;
    NSString * _passcodePrompt;
    NSString * _title;
}

@property (nonatomic) bool isPasscodeRecoveryOptionVisible;
@property (nonatomic, retain) NSString *oldPasscodePrompt;
@property (nonatomic, retain) NSString *passcodePrompt;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)isPasscodeRecoveryOptionVisible;
- (id)oldPasscodePrompt;
- (id)passcodePrompt;
- (void)setIsPasscodeRecoveryOptionVisible:(bool)arg1;
- (void)setOldPasscodePrompt:(id)arg1;
- (void)setPasscodePrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
