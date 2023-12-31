
@interface SUScriptTextFieldNativeObjectUITextField : SUScriptTextFieldNativeObject

- (id)_nativeObjectDelegate;
- (void)_setNativeObjectDelegate:(id)arg1;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (bool)becomeFirstResponder;
- (void)destroyNativeObject;
- (long long)keyboardType;
- (bool)resignFirstResponder;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)setupNativeObject;
- (id)value;
- (double)width;

@end
