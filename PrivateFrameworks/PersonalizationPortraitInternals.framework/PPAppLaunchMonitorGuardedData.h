
@interface PPAppLaunchMonitorGuardedData : NSObject {
    _CDClientContext * clientContext;
    NSMutableDictionary * handlers;
    bool  isRegistered;
    unsigned long long  nextToken;
}

- (void).cxx_destruct;

@end
