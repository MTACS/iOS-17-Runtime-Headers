
@interface VUIMetricsDiskManager : NSObject <VUIMetricsStorable> {
    void eventDefaults;
    void sessionDefaults;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allEvents;
- (id)allSessions;
- (void)clearAllData;
- (id)eventsForSession:(id)arg1;
- (id)init;
- (id)initWithSessionSuiteName:(id)arg1 eventSuiteName:(id)arg2;
- (id)sessionForEvent:(id)arg1;
- (void)writeEvent:(id)arg1;
- (void)writeSession:(id)arg1;

@end
