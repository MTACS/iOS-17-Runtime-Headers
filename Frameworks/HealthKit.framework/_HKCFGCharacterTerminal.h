
@interface _HKCFGCharacterTerminal : _HKCFGTerminal {
    NSCharacterSet * _characterSet;
}

@property (nonatomic, copy) NSCharacterSet *characterSet;

- (void).cxx_destruct;
- (id)_label;
- (unsigned long long)_minimumLength;
- (bool)_scanValue:(id*)arg1 withScanner:(id)arg2;
- (id)characterSet;
- (void)setCharacterSet:(id)arg1;

@end
