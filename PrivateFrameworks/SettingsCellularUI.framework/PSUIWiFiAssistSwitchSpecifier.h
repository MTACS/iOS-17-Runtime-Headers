
@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    struct __CTServerConnection { } * _serverConnection;
}

+ (bool)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (id)cellularUsagePolicy;
- (unsigned long long)dataUsage;
- (void)dealloc;
- (id)getLogger;
- (id)initDefault;
- (void)setCellularUsagePolicy:(id)arg1;

@end
