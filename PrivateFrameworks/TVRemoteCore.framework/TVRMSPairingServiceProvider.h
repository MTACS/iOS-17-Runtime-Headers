
@interface TVRMSPairingServiceProvider : TVRMSBonjourServiceProvider {
    NSMutableDictionary * _monitoredServices;
    NSArray * _pairedNetworkNames;
    NSMutableDictionary * _unmonitoredServices;
}

@property (nonatomic, retain) NSArray *pairedNetworkNames;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (id)pairedNetworkNames;
- (id)searchType;
- (long long)serviceDiscoverySource;
- (long long)serviceLegacyFlagsFromTXTDictionary:(id)arg1;
- (void)setPairedNetworkNames:(id)arg1;

@end
