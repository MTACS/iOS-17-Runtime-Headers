
@interface _UIInputModeCursorAccessory : _UICursorAccessory {
    NSString * _dictationLanguage;
    NSString * _inputModeIdentifier;
}

@property (nonatomic, copy) NSString *dictationLanguage;
@property (nonatomic, copy) NSString *inputModeIdentifier;

- (void).cxx_destruct;
- (id)_inputModeCursorAccessory;
- (id)descriptionBuilder;
- (id)dictationLanguage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)inputModeIdentifier;
- (void)setDictationLanguage:(id)arg1;
- (void)setInputModeIdentifier:(id)arg1;

@end
