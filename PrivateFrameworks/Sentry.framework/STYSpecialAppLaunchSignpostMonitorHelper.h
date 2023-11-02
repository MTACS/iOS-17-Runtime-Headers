
@interface STYSpecialAppLaunchSignpostMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist * _allowList;
    bool  _forceAppLaunchDiagnostics;
}

@property bool forceAppLaunchDiagnostics;

- (void).cxx_destruct;
- (id)allowList;
- (bool)forceAppLaunchDiagnostics;
- (void)handleInterval:(id)arg1;
- (id)init;
- (id)name;
- (void)processAppLaunch:(id)arg1 tailspinFilenamePrefix:(id)arg2 duration:(id)arg3 andPID:(id)arg4 reason:(id)arg5;
- (void)setForceAppLaunchDiagnostics:(bool)arg1;

@end
