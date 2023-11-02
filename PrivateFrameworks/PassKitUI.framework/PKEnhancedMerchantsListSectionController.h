
@interface PKEnhancedMerchantsListSectionController : NSObject <CLLocationManagerDelegate, PKDynamicSectionController, PKEnhancedMerchantCellDelegate, PKViewControllerPreflightable> {
    UICollectionViewCellRegistration * _cellRegistration;
    <PKRewardsHubSectionControllerDelegate> * _delegate;
    PKAccountEnhancedMerchantsFetcher * _fetcher;
    NSArray * _identifiers;
    CLLocation * _lastValidLocation;
    CLLocationManager * _locationManager;
    NSUUID * _merchantsUpdateToken;
    _PKPendingEnhancedMerchantNearbyLocationSearch * _pendingMerchantLocationSearch;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)_disclosuresCellRegistration;
- (id)_genericDisplayableErrorForError:(id)arg1;
- (id)_merchantListCellRegistration;
- (void)_openMapsForMerchantSearch:(id)arg1;
- (void)_performNearbyLocationsSearch:(id)arg1 deviceLocation:(id)arg2;
- (void)_presentError:(id)arg1;
- (void)_reportEventIfNecessaryForButtonTapWithTag:(id)arg1 merchant:(id)arg2;
- (void)_requestLocationUpdateIfPossible;
- (void)_stopUpdatingLocation;
- (void)_updateCellBasedOnCurrentSearch:(id)arg1;
- (id)cellRegistration;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (void)dealloc;
- (id)identifiers;
- (id)initWithSectionIdentifiers:(id)arg1 fetcher:(id)arg2 delegate:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)merchantForPrivateIdentifier:(id)arg1;
- (void)performAction:(long long)arg1 forEnhancedMerchant:(id)arg2 sender:(id)arg3;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end
