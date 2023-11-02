
@interface MTReachability : NSObject <RadiosPreferencesDelegate> {
    bool  _airplaneModeEnabled;
    NSHashTable * _callbacks;
    NSObject<OS_dispatch_queue> * _cellularQueue;
    bool  _globalCellularEnabled;
    bool  _hasDeterminedActualGlobalCellularState;
    long long  _networkStatus;
    RadiosPreferences * _radiosPreferences;
    ITMReachability * _reachability;
    bool  _reachable;
}

@property (getter=isAirplaneModeEnabled, nonatomic, readonly) bool airplaneModeEnabled;
@property (nonatomic, retain) NSHashTable *callbacks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cellularQueue;
@property (getter=isGlobalCellularEnabled, nonatomic) bool globalCellularEnabled;
@property (nonatomic) bool hasDeterminedActualGlobalCellularState;
@property (nonatomic) long long networkStatus;
@property (getter=isPodcastsCellularDownloadsEnabled, nonatomic, readonly) bool podcastsCellularDownloadsEnabled;
@property (nonatomic, retain) RadiosPreferences *radiosPreferences;
@property (nonatomic, retain) ITMReachability *reachability;
@property (getter=isReachable, nonatomic) bool reachable;
@property (getter=isReachableViaCellular, nonatomic, readonly) bool reachableViaCellular;
@property (getter=isReachableViaWifi, nonatomic, readonly) bool reachableViaWifi;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive;
- (void)_showAlertForInternetUnavailableReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_updateAirplaneMode;
- (void)_updateGlobalCellularWithCompletion:(id /* block */)arg1;
- (void)_updateReachability;
- (void)addObserver:(id)arg1;
- (void)airplaneModeChanged;
- (id)callbacks;
- (id)cellularQueue;
- (id)copy;
- (void)dealloc;
- (bool)hasDeterminedActualGlobalCellularState;
- (id)init;
- (bool)isAirplaneModeEnabled;
- (bool)isGlobalCellularEnabled;
- (bool)isPodcastsCellularDownloadsEnabled;
- (bool)isReachable;
- (bool)isReachableViaCellular;
- (bool)isReachableViaWifi;
- (long long)networkStatus;
- (id)radiosPreferences;
- (id)reachability;
- (unsigned long long)reasonForNoInternet;
- (id)reasonTextForNoInternet;
- (void)removeObserver:(id)arg1;
- (void)setCallbacks:(id)arg1;
- (void)setCellularQueue:(id)arg1;
- (void)setGlobalCellularEnabled:(bool)arg1;
- (void)setHasDeterminedActualGlobalCellularState:(bool)arg1;
- (void)setNetworkStatus:(long long)arg1;
- (void)setRadiosPreferences:(id)arg1;
- (void)setReachability:(id)arg1;
- (void)setReachable:(bool)arg1;
- (bool)showInternetUnreachableDialog;
- (bool)showInternetUnreachableDialogWithAcknowledmentBlock:(id /* block */)arg1;

@end
