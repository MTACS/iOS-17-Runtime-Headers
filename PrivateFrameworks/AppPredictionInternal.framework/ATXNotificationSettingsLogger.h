
@interface ATXNotificationSettingsLogger : NSObject {
    ATXNotificationSettingsReader * _reader;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithNotificationSettingsReader:(id)arg1;
- (void)logNotificationSettingsMetrics;
- (void)logNotificationSettingsMetricsWithXPCActivity:(id)arg1;

@end
