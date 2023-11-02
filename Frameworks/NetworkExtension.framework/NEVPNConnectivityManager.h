
@interface NEVPNConnectivityManager : NSObject <NEVPNConnectivitySessionDelegate> {
    NEConfigurationManager * _configManager;
    unsigned long long  _connectivityState;
    <NEVPNConnectivityManagerDelegate> * _delegate;
    bool  _hasRelayConfigurations;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _sessions;
    unsigned long long  _visibilityStyle;
}

@property (nonatomic) unsigned long long connectivityState;
@property <NEVPNConnectivityManagerDelegate> *delegate;
@property (nonatomic) bool hasRelayConfigurations;
@property (nonatomic) unsigned long long visibilityStyle;

- (void).cxx_destruct;
- (unsigned long long)connectivityState;
- (void)dealloc;
- (id)delegate;
- (bool)hasRelayConfigurations;
- (id)initWithDelegate:(id)arg1;
- (void)sessionStatusDidChange:(id)arg1;
- (void)setConnectivityState:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasRelayConfigurations:(bool)arg1;
- (void)setVisibilityStyle:(unsigned long long)arg1;
- (id)toggleVPNConnectivity:(bool)arg1;
- (unsigned long long)visibilityStyle;

@end
