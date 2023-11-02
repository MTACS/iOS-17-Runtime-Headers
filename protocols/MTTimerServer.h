
@protocol MTTimerServer <MTXPCServer>

@required

- (void)addFavoriteDuration:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addRecentDuration:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)dismissTimerWithIdentifier:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getTimerDurationsWithCompletion:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSArray *, MTTimerDuration *, NSError *, void*
- (void)getTimersWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, MTTimer *, NSError *, void*
- (void)removeFavoriteDuration:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeRecentDuration:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)repeatTimerWithIdentifier:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveLatestDuration:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimerDuration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
