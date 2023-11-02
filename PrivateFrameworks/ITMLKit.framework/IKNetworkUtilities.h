
@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate> {
    id  _isNetworkTypeChangedToken;
    id  _networkReachabilityChangedToken;
    RadiosPreferences * _radioPrefs;
}

@property (getter=isAirplaneModeEnabled, nonatomic, readonly) bool airplaneModeEnabled;
@property (nonatomic, readonly) double lastNetworkChangedTime;
@property (getter=isNetworkReachable, nonatomic, readonly) bool networkReachable;
@property (nonatomic, readonly) NSString *networkType;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObservers;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)init;
- (bool)isAirplaneModeEnabled;
- (bool)isNetworkReachable;
- (double)lastNetworkChangedTime;
- (id)networkType;

@end
