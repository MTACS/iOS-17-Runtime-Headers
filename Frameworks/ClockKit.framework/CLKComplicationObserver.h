
@interface CLKComplicationObserver : NSObject {
    CLKClockComplicationCountSet * _homeScreenComplicationCountSet;
    NSHashTable * _observers;
    NSHashTable * _wakeSessionObservers;
}

@property (nonatomic, readonly) CLKClockComplicationCountSet *homeScreenComplicationCountSet;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)addWakeSessionObserver:(id)arg1;
- (void)complicationListDidChange;
- (id)homeScreenComplicationCountSet;
- (id)init;
- (void)reloadOrExtendForBundleID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeWakeSessionObserver:(id)arg1;
- (void)setHomeScreenComplicationCountSet:(id)arg1;
- (void)wakeSessionWillBeginForBundleID:(id)arg1;
- (void)wakeSessionWillEndForBundleID:(id)arg1;

@end
