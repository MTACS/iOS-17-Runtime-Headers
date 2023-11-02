
@interface LAPSPasscodeViewControllerConfiguration : NSObject {
    NSString * _errorMessage;
    NSString * _footer;
    NSString * _nextButton;
    LAPSPasscodeOptionsViewControllerConfiguration * _optionsConfiguration;
    LAPSPasscodeType * _passcodeType;
    NSString * _prompt;
    bool  _shouldAvoidBecomingFirstResponderOnStart;
    NSString * _title;
}

@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, retain) NSString *footer;
@property (nonatomic, retain) NSString *nextButton;
@property (nonatomic, retain) LAPSPasscodeOptionsViewControllerConfiguration *optionsConfiguration;
@property (nonatomic, retain) LAPSPasscodeType *passcodeType;
@property (nonatomic, retain) NSString *prompt;
@property (nonatomic) bool shouldAvoidBecomingFirstResponderOnStart;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)errorMessage;
- (id)footer;
- (id)nextButton;
- (id)optionsConfiguration;
- (id)passcodeType;
- (id)prompt;
- (void)setErrorMessage:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setNextButton:(id)arg1;
- (void)setOptionsConfiguration:(id)arg1;
- (void)setPasscodeType:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setShouldAvoidBecomingFirstResponderOnStart:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldAvoidBecomingFirstResponderOnStart;
- (id)title;

@end
