
@interface MTTimerDataSource : NSObject {
    NSMutableArray * _activeTimers;
    NSArray * _defaultDurations;
    NSArray * _favoriteDurations;
    MTTimerDuration * _latestDuration;
    MTObserverStore * _observers;
    NSArray * _recentDurations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _timerLock;
    MTTimerManager * _timerManager;
    NSMutableArray * _timers;
}

@property (nonatomic, retain) NSMutableArray *activeTimers;
@property (nonatomic, retain) NSArray *defaultDurations;
@property (nonatomic, retain) NSArray *favoriteDurations;
@property (nonatomic, retain) MTTimerDuration *latestDuration;
@property (nonatomic, retain) MTObserverStore *observers;
@property (nonatomic, retain) NSArray *recentDurations;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } timerLock;
@property (nonatomic, retain) MTTimerManager *timerManager;
@property (nonatomic, retain) NSMutableArray *timers;

- (void).cxx_destruct;
- (void)_handleTimerDurationNotification:(id)arg1 block:(id /* block */)arg2;
- (void)_handleTimerNotification:(id)arg1 block:(id /* block */)arg2;
- (void)_iterateObserversWithBlock:(id /* block */)arg1;
- (void)_registerForNotifications;
- (void)_stateReset;
- (void)_withLock:(id /* block */)arg1;
- (id)activeTimerAtRow:(unsigned long long)arg1;
- (id)activeTimers;
- (id)addTimer:(id)arg1;
- (id)addTimer:(id)arg1 reload:(bool)arg2;
- (void)dealloc;
- (id)defaultDurations;
- (id)favoriteDurations;
- (id)getDefaultDurations;
- (id)getFavoriteDurations;
- (id)getLatestDuration;
- (id)getRecentDurations;
- (id)initWithTimerManager:(id)arg1;
- (id)latestDuration;
- (unsigned long long)numberOfActiveTimers;
- (unsigned long long)numberOfTimers;
- (id)observers;
- (void)processFavoriteDurationsUpdated:(id)arg1;
- (void)processLatestDurationsUpdatedWith:(id)arg1;
- (void)processRecentDurationsUpdated:(id)arg1;
- (id)recentDurations;
- (void)registerObserver:(id)arg1;
- (void)reloadTimerDurations;
- (id)reloadTimers;
- (id)reloadTimersNotifyingObservers:(bool)arg1;
- (id)removeTimer:(id)arg1;
- (unsigned long long)rowForTimer:(id)arg1;
- (unsigned long long)rowForTimerWithID:(id)arg1;
- (void)setActiveTimers:(id)arg1;
- (void)setDefaultDurations:(id)arg1;
- (void)setFavoriteDurations:(id)arg1;
- (void)setLatestDuration:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setRecentDurations:(id)arg1;
- (void)setTimerLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setTimerManager:(id)arg1;
- (void)setTimers:(id)arg1;
- (id)timerAtRow:(unsigned long long)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })timerLock;
- (id)timerManager;
- (id)timers;
- (void)unregisterObserver:(id)arg1;
- (id)updateTimer:(id)arg1;
- (id)updateTimer:(id)arg1 reload:(bool)arg2;

@end
