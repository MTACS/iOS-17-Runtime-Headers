
@interface HDClientKeepAliveAssertion : HDAssertion {
    NSString * _clientBundleIdentifier;
    NSDate * _lastLaunchAttempt;
    long long  _launchCount;
    NSDictionary * _payloadOptions;
}

- (void).cxx_destruct;

@end
