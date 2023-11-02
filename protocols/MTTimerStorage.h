
@protocol MTTimerStorage <NSObject>

@required

- (void)addTimer:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)dismissTimerWithIdentifier:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)getTimersWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, MTTimer *, NSError *, void*
- (NSDate *)lastModifiedDate;
- (MTTimer *)nextTimer;
- (void)registerObserver:(id <MTTimerObserver>)arg1;
- (void)removeTimer:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)repeatTimerWithIdentifier:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)setAllTimers:(NSArray *)arg1 source:(id <MTSource>)arg2;
- (NSArray *)timers;
- (void)updateTimer:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *

@optional

- (void)addFavoriteDuration:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)addRecentDuration:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)getDurationsWithCompletion:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSArray *, MTTimerDuration *, NSError *, void*
- (void)removeFavoriteDuration:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)removeRecentDuration:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)saveLatestDuration:(void *)arg1 withCompletion:(void *)arg2 source:(void *)arg3; // needs 3 arg types, found 8: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <MTSource> *
- (void)setDurationUpdateDelegate:(id <MTDurationUpdateDelegate>)arg1;

@end
