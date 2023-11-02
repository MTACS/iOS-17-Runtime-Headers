
@protocol MPCPlaybackEngineEventStreamCursor <NSObject>

@required

- (long long)countOfPreviousEventsWithType:(NSString *)arg1 matchingPayload:(NSDictionary *)arg2;
- (long long)countOfPreviousEventsWithTypes:(NSArray *)arg1 matchingPayload:(NSDictionary *)arg2;
- (<MPCPlaybackEngineEventStreamCursor> *)cursorFromEvent:(MPCPlaybackEngineEvent *)arg1 untilEvent:(MPCPlaybackEngineEvent *)arg2;
- (<MPCPlaybackEngineEventStreamCursor> *)cursorUntilEvent:(MPCPlaybackEngineEvent *)arg1;
- (MPCPlaybackEngineEvent *)endEvent;
- (void)enumeratePreviousEventsWithType:(void *)arg1 matchingPayload:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPCPlaybackEngineEvent *, bool*, void*
- (void)enumeratePreviousEventsWithType:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPCPlaybackEngineEvent *, bool*, void*
- (void)enumeratePreviousEventsWithTypes:(void *)arg1 matchingPayload:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPCPlaybackEngineEvent *, bool*, void*
- (void)enumeratePreviousEventsWithTypes:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPCPlaybackEngineEvent *, bool*, void*
- (MPCPlaybackEngineEvent *)findPreviousEventWithType:(NSString *)arg1 matchingPayload:(NSDictionary *)arg2;
- (MPCPlaybackEngineEvent *)findPreviousEventWithTypes:(NSArray *)arg1 matchingPayload:(NSDictionary *)arg2;
- (MPCPlaybackEngineEvent *)startEvent;

@end
