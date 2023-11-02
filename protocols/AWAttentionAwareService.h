
@protocol AWAttentionAwareService

@required

- (void)addClient:(void *)arg1 clientConfig:(void *)arg2 clientIndex:(void *)arg3 unitTestMode:(void *)arg4 reply:(void *)arg5 subscribeForStreamingEvents:(void *)arg6; // needs 6 arg types, found 13: <AWFrameworkClient> *, AWAttentionAwarenessConfiguration *, int, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AWRemoteClient> *, int, NSError *, void*, bool
- (void)crashWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getDebugPreferences:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getSupportedEventsWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)getUnitTestSamplerWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AWUnitTestSampler> *, void*
- (void)outputPowerLogWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setDebugPreference:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@end
