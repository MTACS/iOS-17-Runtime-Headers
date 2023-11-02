
@interface SURollbackOptions : SUOptionsBase <NSCopying, NSSecureCoding> {
    bool  _cancelActiveUpdate;
    bool  _promptForConsent;
    bool  _promptForPasscode;
}

@property (nonatomic) bool cancelActiveUpdate;
@property (nonatomic) bool promptForConsent;
@property (nonatomic) bool promptForPasscode;

+ (bool)supportsSecureCoding;

- (bool)cancelActiveUpdate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)promptForConsent;
- (bool)promptForPasscode;
- (void)setCancelActiveUpdate:(bool)arg1;
- (void)setPromptForConsent:(bool)arg1;
- (void)setPromptForPasscode:(bool)arg1;

@end
