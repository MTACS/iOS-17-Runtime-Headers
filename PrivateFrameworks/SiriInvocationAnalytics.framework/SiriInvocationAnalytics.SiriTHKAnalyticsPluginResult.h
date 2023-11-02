
@interface SiriInvocationAnalytics.SiriTHKAnalyticsPluginResult : NSObject {
    void numTHKEvents;
    void thkEventSummaries;
}

@property (nonatomic) long long numTHKEvents;
@property (nonatomic, copy) NSDictionary *thkEventSummaries;

+ (id)numTHKEventsKey;
+ (id)thkEventSummariesKey;

- (void).cxx_destruct;
- (id)init;
- (long long)numTHKEvents;
- (void)setNumTHKEvents:(long long)arg1;
- (void)setThkEventSummaries:(id)arg1;
- (id)thkEventSummaries;

@end
