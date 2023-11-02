
@protocol UITextInputTraits <NSObject>

@optional

- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)enablesReturnKeyAutomatically;
- (long long)inlinePredictionType;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (UITextInputPasswordRules *)passwordRules;
- (long long)returnKeyType;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)setInlinePredictionType:(long long)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPasswordRules:(UITextInputPasswordRules *)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSmartDashesType:(long long)arg1;
- (void)setSmartInsertDeleteType:(long long)arg1;
- (void)setSmartQuotesType:(long long)arg1;
- (void)setSpellCheckingType:(long long)arg1;
- (void)setTextContentType:(NSString *)arg1;
- (long long)smartDashesType;
- (long long)smartInsertDeleteType;
- (long long)smartQuotesType;
- (long long)spellCheckingType;
- (NSString *)textContentType;

@end
