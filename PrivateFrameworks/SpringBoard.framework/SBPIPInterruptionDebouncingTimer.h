
@interface SBPIPInterruptionDebouncingTimer : BSAbsoluteMachTimer {
    SBPIPInterruptionAssertion * _debouncedAssertion;
}

@property (nonatomic) SBPIPInterruptionAssertion *debouncedAssertion;

- (void).cxx_destruct;
- (id)debouncedAssertion;
- (void)setDebouncedAssertion:(id)arg1;

@end
