
@interface VUINetworkUtilities : NSObject <ICEnvironmentMonitorObserver, RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> * _networkUtilityQueue;
    RadiosPreferences * _radioPrefs;
}

@property (getter=isAirplaneModeEnabled, nonatomic, readonly) bool airplaneModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNetworkReachable, nonatomic, readonly) bool networkReachable;
@property (nonatomic, readonly) NSString *networkType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *networkUtilityQueue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)airplaneModeChanged;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)init;
- (bool)isAirplaneModeEnabled;
- (bool)isNetworkReachable;
- (id)networkType;
- (id)networkUtilityQueue;
- (void)setNetworkUtilityQueue:(id)arg1;

@end
