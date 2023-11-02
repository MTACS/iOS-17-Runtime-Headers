
@interface PSUIVPNStateSnapshot : NSObject {
    bool  __hasRelayConfigurations;
    unsigned long long  __vpnConnectivityState;
    unsigned long long  __vpnSettingsVisibilityStyle;
    bool  _loading;
    NSString * _primaryText;
    NSString * _secondaryText;
}

@property (nonatomic) bool _hasRelayConfigurations;
@property (nonatomic) unsigned long long _vpnConnectivityState;
@property (nonatomic) unsigned long long _vpnSettingsVisibilityStyle;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly, copy) NSString *primaryText;
@property (nonatomic, readonly, copy) NSString *secondaryText;

+ (id)na_identity;

- (void).cxx_destruct;
- (bool)_hasRelayConfigurations;
- (unsigned long long)_vpnConnectivityState;
- (unsigned long long)_vpnSettingsVisibilityStyle;
- (unsigned long long)hash;
- (id)initWithVisibilityStyle:(unsigned long long)arg1 connectivityState:(unsigned long long)arg2 hasRelayConfigurations:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLoading;
- (id)primaryText;
- (id)secondaryText;
- (void)set_hasRelayConfigurations:(bool)arg1;
- (void)set_vpnConnectivityState:(unsigned long long)arg1;
- (void)set_vpnSettingsVisibilityStyle:(unsigned long long)arg1;

@end
