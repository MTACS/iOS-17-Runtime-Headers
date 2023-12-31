
@interface VSBindableTextField : UITextField

- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)isSecureTextEntry;
- (long long)keyboardType;
- (id)placeholder;
- (long long)returnKeyType;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
