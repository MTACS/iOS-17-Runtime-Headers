
@interface WiFiUsageUserSession : WiFiUsageSession {
    bool  _deviceLocked;
    bool  _userInactive;
}

- (void)displayStateDidChange:(bool)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (void)linkQualityDidChange:(id)arg1;
- (void)lockStateDidChange:(bool)arg1;
- (id)metricName;

@end
