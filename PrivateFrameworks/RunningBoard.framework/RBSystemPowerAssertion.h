
@interface RBSystemPowerAssertion : RBPowerAssertion {
    RBSystemState * _state;
}

- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
- (id)init;

@end
