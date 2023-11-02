
@interface SBTraitsInputsOrientationLockValidator : SBTraitsInputsValidator {
    TRAArbitrationDeviceOrientationInputs * _lastForwardedOrientationInputs;
    long long  _lockOrientation;
    bool  _prefersDeferringOrientationUpdates;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithValidatorOrder:(id)arg1;
- (void)setLockOrientation:(long long)arg1;
- (void)setPrefersDeferringOrientationUpdates:(bool)arg1;
- (id)validateInputs:(id)arg1 withContext:(id)arg2;

@end
