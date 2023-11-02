
@interface ATXFakeCoreAnalyticsLogger : NSObject {
    NSMutableArray * _loggedEvents;
}

+ (bool)hasReceivedEventWithMetricName:(id)arg1 partialDictionary:(id)arg2;
+ (void)resetEvents;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)hasReceivedEventWithMetricName:(id)arg1 partialDictionary:(id)arg2;
- (id)init;
- (double)numberOfReceivedEvents;
- (bool)partialDictionaryMatches:(id)arg1 eventDictionary:(id)arg2;
- (void)resetEvents;
- (void)sendEventWithMetricName:(id)arg1 eventDictionary:(id)arg2;

@end
