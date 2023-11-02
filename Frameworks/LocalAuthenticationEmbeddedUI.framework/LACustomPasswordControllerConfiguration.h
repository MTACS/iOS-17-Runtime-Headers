
@interface LACustomPasswordControllerConfiguration : NSObject {
    NSString * _cancelButtonTitle;
    unsigned long long  _mode;
    long long  _passwordType;
    NSString * _prompt;
    LACustomPasswordControllerStyle * _style;
    NSString * _verifyPrompt;
}

@property (nonatomic, retain) NSString *cancelButtonTitle;
@property (nonatomic) long long passwordType;
@property (nonatomic, retain) LACustomPasswordControllerStyle *style;

+ (id)enterCustomPasswordConfiguration;
+ (id)enterCustomPasswordConfigurationWithPrompt:(id)arg1;
+ (id)registerCustomPasswordConfiguration;
+ (id)registerCustomPasswordControllerConfigurationWithPrompt:(id)arg1 verifyPrompt:(id)arg2;

- (void).cxx_destruct;
- (id)cancelButtonTitle;
- (unsigned long long)mode;
- (long long)passwordType;
- (id)prompt;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setPasswordType:(long long)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)verifyPrompt;

@end
