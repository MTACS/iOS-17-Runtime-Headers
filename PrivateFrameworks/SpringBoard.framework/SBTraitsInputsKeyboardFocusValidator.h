
@interface SBTraitsInputsKeyboardFocusValidator : SBTraitsInputsValidator {
    UIKBArbiterClientFocusContext * _focusContext;
}

@property (nonatomic) UIKBArbiterClientFocusContext *focusContext;

- (void).cxx_destruct;
- (id)description;
- (id)focusContext;
- (void)setFocusContext:(id)arg1;
- (id)validateInputs:(id)arg1 withContext:(id)arg2;

@end
