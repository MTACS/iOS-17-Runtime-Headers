
@protocol WatchSportsEventIntentHandling <NSObject>

@required

- (void)handleWatchSportsEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WatchSportsEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WatchSportsEventIntentResponse *, void*
- (void)handleWatchSportsEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WatchSportsEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WatchSportsEventIntentResponse *, void*

@optional

- (void)confirmWatchSportsEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WatchSportsEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WatchSportsEventIntentResponse *, void*
- (void)confirmWatchSportsEvent:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WatchSportsEventIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WatchSportsEventIntentResponse *, void*

@end
