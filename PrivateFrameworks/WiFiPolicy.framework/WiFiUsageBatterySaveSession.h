
@interface WiFiUsageBatterySaveSession : WiFiUsageSession {
    bool  _batterySaveMode;
}

- (id)initWithInterfaceName:(id)arg1;
- (id)metricName;
- (void)updateWowState:(bool)arg1 lpasState:(bool)arg2 lowPowerState:(bool)arg3 batterySaverState:(bool)arg4;

@end
