
@interface TIMathSymbolPunctuationController : NSObject {
    bool  _converted;
    NSString * _decimalSeparator;
    bool  _enabled;
    long long  _location;
    bool  _replaceAfterNumerals;
    unsigned short  _replacementCharacter;
    unsigned long long  _state;
}

@property (nonatomic, readonly) bool converted;
@property (nonatomic, copy) NSString *decimalSeparator;
@property (nonatomic) bool enabled;
@property (nonatomic) bool replaceAfterNumerals;

- (void).cxx_destruct;
- (bool)converted;
- (id)decimalSeparator;
- (bool)enabled;
- (id)init;
- (id)mathSymbolPunctuationedStringForInputString:(id)arg1;
- (bool)replaceAfterNumerals;
- (void)reset;
- (void)setDecimalSeparator:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInputString:(id)arg1;
- (void)setReplaceAfterNumerals:(bool)arg1;
- (bool)updateInputString:(id)arg1;

@end
