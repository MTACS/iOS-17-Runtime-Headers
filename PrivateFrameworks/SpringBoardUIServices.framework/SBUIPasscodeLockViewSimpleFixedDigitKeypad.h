
@interface SBUIPasscodeLockViewSimpleFixedDigitKeypad : SBUIPasscodeLockViewWithKeypad {
    unsigned long long  _numberOfDigits;
}

@property (nonatomic, readonly) unsigned long long numberOfDigits;

- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (id)_newEntryField;
- (id)initWithLightStyle:(bool)arg1;
- (id)initWithLightStyle:(bool)arg1 numberOfDigits:(unsigned long long)arg2;
- (unsigned long long)numberOfDigits;

@end
