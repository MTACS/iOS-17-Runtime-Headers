
@interface VUINetworkReachabilityMonitor : NSObject <ICEnvironmentMonitorObserver> {
    id  _networkReachabilityChangedNotificationToken;
    bool  _networkReachable;
    id  _networkTypeChangedNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id networkReachabilityChangedNotificationToken;
@property (getter=isNetworkReachable) bool networkReachable;
@property (nonatomic, retain) id networkTypeChangedNotificationToken;
@property (readonly) Class superclass;

+ (bool)_isNetworkReachable;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateNetworkReachability;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)init;
- (bool)isNetworkReachable;
- (id)networkReachabilityChangedNotificationToken;
- (id)networkTypeChangedNotificationToken;
- (void)setNetworkReachabilityChangedNotificationToken:(id)arg1;
- (void)setNetworkReachable:(bool)arg1;
- (void)setNetworkTypeChangedNotificationToken:(id)arg1;

@end
