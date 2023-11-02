
@interface HUSoftwareUpdateUIManager : NSObject <HFExecutionEnvironmentObserver, HFSoftwareUpdateObserver> {
    NSMapTable * _homeBackgroundCheckMapTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *homeBackgroundCheckMapTable;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_fetchAvailableUpdatesForAccessories:(id)arg1 options:(unsigned long long)arg2;
- (id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg1 inHome:(id)arg2;
- (bool)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg1 home:(id)arg2;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (id)fetchAvailableUpdatesForAccessories:(id)arg1 options:(unsigned long long)arg2;
- (id)fetchAvailableUpdatesForHome:(id)arg1 options:(unsigned long long)arg2;
- (id)homeBackgroundCheckMapTable;
- (id)init;
- (bool)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg1 error:(out id*)arg2;
- (long long)numberOfAccessoriesWithAvailableUpdates:(id)arg1;
- (long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1;
- (id)presentLicensesIfNeededForSoftwareUpdate:(id)arg1 presentationDelegate:(id)arg2;
- (void)startSilentBackgroundCheckForHome:(id)arg1;
- (id)startUpdateForAccessory:(id)arg1 presentationDelegate:(id)arg2;
- (id)startUpdatesForAccessories:(id)arg1 presentationDelegate:(id)arg2;
- (id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2;

@end
