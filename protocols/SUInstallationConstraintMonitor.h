
@protocol SUInstallationConstraintMonitor

@required

- (<SUInstallationConstraintMonitorDelegate> *)delegate;
- (bool)isSatisfied;
- (unsigned long long)representedConstraints;
- (void)setDelegate:(id <SUInstallationConstraintMonitorDelegate>)arg1;
- (unsigned long long)unsatisfiedConstraints;
- (unsigned long long)unsatisfiedConstraintsWithIgnorableConstraints:(unsigned long long)arg1;

@end
