
@interface _HDAlertSuppressorAssertion : HDAssertion {
    NSObject<OS_dispatch_source> * _keepaliveTimer;
    NSString * _processBundleIdentifier;
}

- (void).cxx_destruct;

@end
