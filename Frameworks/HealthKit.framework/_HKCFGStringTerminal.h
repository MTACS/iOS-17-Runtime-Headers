
@interface _HKCFGStringTerminal : _HKCFGTerminal {
    bool  _caseSensitive;
    NSString * _string;
}

@property (nonatomic) bool caseSensitive;
@property (nonatomic, copy) NSString *string;

- (void).cxx_destruct;
- (id)_label;
- (unsigned long long)_minimumLength;
- (bool)_scanValue:(id*)arg1 withScanner:(id)arg2;
- (bool)caseSensitive;
- (id)characterSet;
- (void)setCaseSensitive:(bool)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
