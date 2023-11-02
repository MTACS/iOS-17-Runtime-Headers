
@interface RBProcessPowerAssertion : RBPowerAssertion {
    RBProcess * _process;
    RBProcessState * _state;
}

- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;

@end
