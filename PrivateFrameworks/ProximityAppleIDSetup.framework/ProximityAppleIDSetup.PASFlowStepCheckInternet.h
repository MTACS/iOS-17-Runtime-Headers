
@interface ProximityAppleIDSetup.PASFlowStepCheckInternet : ProximityAppleIDSetup.PASGuardianFlowStepBase {
    void _accountStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isNetworkReachable;
    void _reachabilityProvider;
    void noInternetResult;
}

@end
