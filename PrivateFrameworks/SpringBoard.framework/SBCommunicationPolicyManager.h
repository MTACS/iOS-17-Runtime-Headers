
@interface SBCommunicationPolicyManager : NSObject {
    DMFCommunicationPolicyMonitor * _communicationPolicyMonitor;
    NSDictionary * _policiesByBundleIdentifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg1;

@end
