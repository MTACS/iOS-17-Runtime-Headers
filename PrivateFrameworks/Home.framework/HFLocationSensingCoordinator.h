
@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver> {
    bool  _cachedHomeSensingValue;
    NSUserDefaults * _defaults;
    int  _defaultsChangedNotifyToken;
    <HFLocationSensingCoordinatorDelegate> * _delegate;
    NAFuture * _homeSensingFirstFuture;
    HFLocationManagerDispatcher * _locationDispatcher;
}

@property (nonatomic) bool cachedHomeSensingValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic) int defaultsChangedNotifyToken;
@property (nonatomic) <HFLocationSensingCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeSensingEnabled;
@property (nonatomic, retain) NAFuture *homeSensingFirstFuture;
@property (nonatomic, retain) HFLocationManagerDispatcher *locationDispatcher;
@property (nonatomic, readonly) NAFuture *locationSensingAvailableFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_defaultsDidChange;
- (bool)cachedHomeSensingValue;
- (void)dealloc;
- (id)defaults;
- (int)defaultsChangedNotifyToken;
- (id)delegate;
- (bool)homeSensingEnabled;
- (id)homeSensingFirstFuture;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)locationDispatcher;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)locationSensingAvailableFuture;
- (bool)readHomeSensingDefault;
- (void)setCachedHomeSensingValue:(bool)arg1;
- (void)setDefaults:(id)arg1;
- (void)setDefaultsChangedNotifyToken:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeSensingEnabled:(bool)arg1;
- (void)setHomeSensingFirstFuture:(id)arg1;
- (void)setLocationDispatcher:(id)arg1;

@end
