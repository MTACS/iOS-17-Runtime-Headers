
@interface MUPlaceExtensionDiscoveryManager : NSObject {
    MUAMSResultProvider * _amsResultProvider;
    bool  _canShowExtensionReservation;
    NSArray * _extensionDataItems;
    NSArray * _extensionDiscoveryResults;
    _MXExtensionManager * _extensionManager;
    NSMutableDictionary * _extensionsByAppIds;
    bool  _performingDiscovery;
    bool  _reservationProviderAppInstalled;
    NSMutableDictionary * _vendorIdsByAppIds;
}

@property (nonatomic, readonly) bool canShowExtensionReservation;
@property (getter=isPerformingDiscovery, nonatomic, readonly) bool performingDiscovery;
@property (getter=isReservationProviderAppInstalled, nonatomic, readonly) bool reservationProviderAppInstalled;

- (void).cxx_destruct;
- (void)_loadAppLockupExtensionGroupsUsingAppIdentifiers:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)_performExtensionDiscoveryUsingExtensionGroups:(id)arg1 usingAppIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (bool)canShowExtensionReservation;
- (id)discoveryResultForDataItem:(id)arg1;
- (id)initWithExtensionDataItems:(id)arg1 amsResultProvider:(id)arg2;
- (bool)isPerformingDiscovery;
- (bool)isReservationProviderAppInstalled;
- (void)performExtensionDiscoveryWithOptions:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;

@end
