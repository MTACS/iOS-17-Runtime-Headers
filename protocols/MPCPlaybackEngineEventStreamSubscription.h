
@protocol MPCPlaybackEngineEventStreamSubscription <NSObject>

@required

- (void)cancelSubscription;
- (void)flushEventsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)streamID;
- (void)subscribeToEventType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, MPCPlaybackEngineEvent *, <MPCPlaybackEngineEventStreamCursor> *, void*
- (void)subscribeToEventType:(void *)arg1 options:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, MPCPlaybackEngineEvent *, <MPCPlaybackEngineEventStreamCursor> *, void*

@end
