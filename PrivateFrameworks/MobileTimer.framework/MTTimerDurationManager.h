
@interface MTTimerDurationManager : NSObject <MTTimerObserver> {
    NSMutableArray * __favoriteDurations;
    MTTimerDuration * __latestDuration;
    NSMutableArray * __recentDurations;
    <MTPersistence> * _persistence;
    <MTDurationUpdateDelegate> * _updateDelegate;
}

@property (nonatomic, retain) NSMutableArray *_favoriteDurations;
@property (nonatomic, retain) MTTimerDuration *_latestDuration;
@property (nonatomic, retain) NSMutableArray *_recentDurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTPersistence> *persistence;
@property (readonly) Class superclass;
@property (nonatomic) <MTDurationUpdateDelegate> *updateDelegate;

+ (id)defaultDurations;
+ (id)durationFromTimer:(id)arg1;
+ (id)durationWithMinutes:(unsigned long long)arg1;
+ (double)intervalWithMinutes:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_favoriteDurations;
- (id)_latestDuration;
- (id)_recentDurations;
- (void)addDuration:(id)arg1 toCollection:(id)arg2 withKey:(id)arg3 limit:(unsigned long long)arg4;
- (void)addFavoriteDuration:(id)arg1;
- (void)addRecentDuration:(id)arg1;
- (void)clearAllDurations;
- (id)favoriteDurations;
- (id)initWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1 storage:(id)arg2;
- (id)latestDuration;
- (void)nextTimerDidChange:(id)arg1;
- (id)persistence;
- (id)recentDurations;
- (void)removeDuration:(id)arg1 fromCollection:(id)arg2 withKey:(id)arg3;
- (void)removeFavoriteDuration:(id)arg1;
- (void)removeRecentDuration:(id)arg1;
- (id)restoreDurationWithKey:(id)arg1;
- (id)restoreDurationsWithKey:(id)arg1;
- (void)saveLatestDuration:(id)arg1;
- (void)setDurationUpdateDelegate:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)set_favoriteDurations:(id)arg1;
- (void)set_latestDuration:(id)arg1;
- (void)set_recentDurations:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2 fromTimers:(id)arg3;
- (void)synchronizeCollection:(id)arg1 withKey:(id)arg2;
- (void)syncrhonizeObject:(id)arg1 withKey:(id)arg2;
- (id)updateDelegate;

@end
