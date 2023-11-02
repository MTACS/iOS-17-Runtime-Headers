
@interface WFDetailContextWiFiModeConfig : NSObject {
    long long  _wifiMode;
    bool  _wifiModeConfigurable;
}

@property (nonatomic) long long wifiMode;
@property (getter=isWifiModeConfigurable, nonatomic) bool wifiModeConfigurable;

- (id)initWithConfigurable:(bool)arg1 wifiMode:(long long)arg2;
- (bool)isWifiModeConfigurable;
- (void)setWifiMode:(long long)arg1;
- (void)setWifiModeConfigurable:(bool)arg1;
- (long long)wifiMode;

@end
