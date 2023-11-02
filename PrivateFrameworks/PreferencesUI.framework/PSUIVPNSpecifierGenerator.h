
@interface PSUIVPNSpecifierGenerator : NSObject <NEVPNConnectivityManagerDelegate> {
    PSUIVPNStateSnapshot * __currentSnapshot;
    NSObject<OS_dispatch_queue> * __loadingQueue;
    NEVPNConnectivityManager * __vpnConnectivityManager;
    <PSUIVPNSpecifierGeneratorDelegate> * _delegate;
}

@property (nonatomic, retain) PSUIVPNStateSnapshot *_currentSnapshot;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (nonatomic, retain) NEVPNConnectivityManager *_vpnConnectivityManager;
@property (nonatomic) <PSUIVPNSpecifierGeneratorDelegate> *delegate;

- (void).cxx_destruct;
- (id)_currentSnapshot;
- (id)_loadingQueue;
- (void)_reloadVPNStateWithCompletion:(id /* block */)arg1;
- (void)_setVPNStatus:(id)arg1 specifier:(id)arg2;
- (id)_vpnConnectivityManager;
- (id)_vpnStatus:(id)arg1;
- (id)_vpnStatusString:(id)arg1;
- (void)connectivityManagerDidChange:(id)arg1;
- (id)delegate;
- (id)initWithLoadingQueue:(id)arg1;
- (void)lazyLoadBundle:(id)arg1;
- (void)reloadVPNStateWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)set_currentSnapshot:(id)arg1;
- (void)set_loadingQueue:(id)arg1;
- (void)set_vpnConnectivityManager:(id)arg1;
- (id)specifier;
- (id)vpnSpecifierForVisibilityStyleLink;
- (id)vpnSpecifierForVisibilityStyleToggle;

@end
