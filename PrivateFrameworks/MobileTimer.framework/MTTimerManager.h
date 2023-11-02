
@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver> {
    MTTimerCache * _cache;
    MTXPCConnectionProvider * _connectionProvider;
    MTTimerManagerExportedObject * _exportedObject;
    MTMetrics * _metrics;
    NSNotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) MTTimerCache *cache;
@property (nonatomic, readonly) MTXPCConnectionProvider *connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MTTimerManagerExportedObject *exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTMetrics *metrics;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) id notificationObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTTimerManagerIntentSupport> *timerManager;

+ (double)defaultDuration;
+ (void)setDefaultDuration:(double)arg1;
+ (void)warmUp;

- (void).cxx_destruct;
- (void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(id /* block */)arg2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(id /* block */)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)_runningTimerFromCurrentTimer:(id)arg1 withDuration:(double)arg2;
- (id)_updateCurrentTimerWithState:(unsigned long long)arg1;
- (bool)_updateCurrentTimerWithStateSync:(unsigned long long)arg1;
- (id)_updateTimer:(id)arg1 doSynchronous:(bool)arg2;
- (id)_validateCanStartTimer:(id)arg1;
- (id)addFavoriteDuration:(id)arg1;
- (id)addRecentDuration:(id)arg1;
- (id)addTimer:(id)arg1;
- (id)cache;
- (void)checkIn;
- (id)connectionProvider;
- (id)currentTimer;
- (void)dealloc;
- (id)defaultDurations;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)exportedObject;
- (id)favoriteDurations;
- (id)getCurrentTimerSync;
- (id)getQueryDurations:(id /* block */)arg1 withFuture:(id)arg2;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithMetrics:(id)arg1;
- (id)latestDuration;
- (void)loadAllDurationsWithCompletion:(id /* block */)arg1;
- (id)metrics;
- (id)nextTimer;
- (id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)notificationCenter;
- (id)notificationObject;
- (id)pauseCurrentTimer;
- (bool)pauseCurrentTimerSync;
- (id)recentDurations;
- (void)reconnect;
- (id)removeFavoriteDuration:(id)arg1;
- (id)removeRecentDuration:(id)arg1;
- (id)removeTimer:(id)arg1;
- (id)repeatTimerWithIdentifier:(id)arg1;
- (id)resumeCurrentTimer;
- (bool)resumeCurrentTimerSync;
- (id)saveLatestDuration:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (id)startCurrentTimerWithDuration:(double)arg1;
- (bool)startCurrentTimerWithDurationSync:(double)arg1;
- (id)stopCurrentTimer;
- (bool)stopCurrentTimerSync;
- (id)timerManager;
- (id)timers;
- (id)timersSync;
- (id)updateTimer:(id)arg1;

@end
