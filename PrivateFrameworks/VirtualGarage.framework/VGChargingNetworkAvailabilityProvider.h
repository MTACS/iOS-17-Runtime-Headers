
@interface VGChargingNetworkAvailabilityProvider : NSObject <GEOResourceManifestTileGroupObserver> {
    NSString * _activeCountryCode;
    NSString * _activeLanguageCode;
    <VGChargingNetworkAvailabilityProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSArray * _otherNetworks;
    NSArray * _suggestedNetworks;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *otherNetworks;
@property (nonatomic, readonly) NSArray *suggestedNetworks;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_localeChanged:(id)arg1;
- (void)_reloadNetworks;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)otherNetworks;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (id)suggestedNetworks;

@end
