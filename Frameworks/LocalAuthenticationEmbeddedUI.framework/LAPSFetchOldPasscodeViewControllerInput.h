
@interface LAPSFetchOldPasscodeViewControllerInput : NSObject {
    long long  _backoffTimeout;
    NSString * _errorMessage;
    NSString * _nextButton;
    LAPSPasscodeType * _passcodeType;
    NSString * _prompt;
    NSString * _title;
}

@property (nonatomic) long long backoffTimeout;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, retain) NSString *nextButton;
@property (nonatomic, retain) LAPSPasscodeType *passcodeType;
@property (nonatomic, retain) NSString *prompt;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (long long)backoffTimeout;
- (id)errorMessage;
- (id)nextButton;
- (id)passcodeType;
- (id)prompt;
- (void)setBackoffTimeout:(long long)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setPasscodeType:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
