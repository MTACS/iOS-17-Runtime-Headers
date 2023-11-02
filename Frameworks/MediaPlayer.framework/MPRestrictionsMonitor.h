
@interface MPRestrictionsMonitor : NSObject <MCProfileConnectionObserver> {
    bool  _allowsAccountModification;
    bool  _allowsDeletion;
    bool  _allowsExplicitContent;
    bool  _allowsMusicSubscription;
    bool  _allowsMusicVideos;
    bool  _allowsRadioPurchases;
    bool  _allowsRadioService;
    bool  _allowsStorePurchases;
    NSMutableDictionary * _cachedSettings;
    MCProfileConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _maximumMovieRatingForAgeGate;
    long long  _maximumTVShowRatingForAgeGate;
}

@property (nonatomic, readonly) bool allowsAccountModification;
@property (nonatomic, readonly) bool allowsDeletion;
@property (nonatomic, readonly) bool allowsExplicitContent;
@property (nonatomic, readonly) bool allowsMusicSubscription;
@property (nonatomic, readonly) bool allowsMusicVideos;
@property (nonatomic, readonly) bool allowsRadioPurchases;
@property (nonatomic, readonly) bool allowsRadioService;
@property (nonatomic, readonly) bool allowsStorePurchases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRestrictionsPasscode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long maximumMovieRating;
@property (nonatomic) long long maximumMovieRatingForAgeGate;
@property (nonatomic, readonly) long long maximumTVShowRating;
@property (nonatomic) long long maximumTVShowRatingForAgeGate;
@property (readonly) Class superclass;

+ (id)sharedRestrictionsMonitor;

- (void).cxx_destruct;
- (void)_cacheValue:(id)arg1 forSetting:(id)arg2;
- (bool)_isRunningInStoreDemoMode;
- (void)_updateWithCanPostNotifications:(bool)arg1;
- (bool)allowsAccountModification;
- (bool)allowsDeletion;
- (bool)allowsExplicitContent;
- (bool)allowsMusicSubscription;
- (bool)allowsMusicVideos;
- (bool)allowsRadioPurchases;
- (bool)allowsRadioService;
- (bool)allowsStorePurchases;
- (void)dealloc;
- (id)effectiveValueForSetting:(id)arg1;
- (void)handleAllowExplicitSettingDidChangeNotification:(id)arg1;
- (bool)hasRestrictionsPasscode;
- (id)init;
- (long long)maximumMovieRating;
- (long long)maximumMovieRatingForAgeGate;
- (long long)maximumTVShowRating;
- (long long)maximumTVShowRatingForAgeGate;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setMaximumMovieRatingForAgeGate:(long long)arg1;
- (void)setMaximumTVShowRatingForAgeGate:(long long)arg1;

@end
