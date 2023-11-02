
@interface WiFiUsageDeviceSession : WiFiUsageSession {
    bool  _firstDisplayOn;
}

- (void)displayStateDidChange:(bool)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (void)linkQualityDidChange:(id)arg1;
- (id)metricName;
- (void)systemWakeStateDidChange:(bool)arg1 wokenByWiFi:(bool)arg2;

@end
