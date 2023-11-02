
@interface SBTraitsInputsOrientationNonFlatOverrideValidator : SBTraitsInputsValidator {
    long long  _lastNonFlatOrientationOverride;
}

- (id)description;
- (void)setLastNonFlatOrientationOverride:(long long)arg1;
- (id)validateInputs:(id)arg1 withContext:(id)arg2;

@end
