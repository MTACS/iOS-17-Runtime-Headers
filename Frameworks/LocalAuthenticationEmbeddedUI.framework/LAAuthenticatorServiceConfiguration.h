
@interface LAAuthenticatorServiceConfiguration : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _cancelButtonTitle;
    LAContext * _context;
    NSString * _fallbackButtonTitle;
    bool  _headerHidden;
    unsigned long long  _mode;
    long long  _passcodeLength;
    NSString * _passwordFieldPlaceholder;
    NSString * _prompt;
    unsigned long long  _requirement;
    bool  _requiresIntent;
    unsigned long long  _style;
    NSString * _subtitle;
    NSString * _title;
    NSString * _verifyPrompt;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *cancelButtonTitle;
@property (nonatomic, readonly) LAContext *context;
@property (nonatomic, retain) NSString *fallbackButtonTitle;
@property (nonatomic) bool headerHidden;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) long long passcodeLength;
@property (nonatomic, retain) NSString *passwordFieldPlaceholder;
@property (nonatomic, retain) NSString *prompt;
@property (nonatomic, readonly) unsigned long long requirement;
@property (nonatomic) bool requiresIntent;
@property (nonatomic) unsigned long long style;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *verifyPrompt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)cancelButtonTitle;
- (id)context;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackButtonTitle;
- (bool)headerHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 requirement:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 requirement:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithCustomPasswordConfiguration:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mode;
- (long long)passcodeLength;
- (id)passwordFieldPlaceholder;
- (id)prompt;
- (unsigned long long)requirement;
- (bool)requiresIntent;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setFallbackButtonTitle:(id)arg1;
- (void)setHeaderHidden:(bool)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPasscodeLength:(long long)arg1;
- (void)setPasswordFieldPlaceholder:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRequiresIntent:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerifyPrompt:(id)arg1;
- (unsigned long long)style;
- (id)subtitle;
- (id)title;
- (id)validateConfiguration;
- (id)verifyPrompt;

@end
