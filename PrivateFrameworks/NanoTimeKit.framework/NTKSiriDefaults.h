
@interface NTKSiriDefaults : NSObject <NTKFaceCollectionObserver> {
    NTKFaceCollection * _faceCollection;
    bool  _hasMigratedDisabledDataSources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *disabledDataSources;
@property (nonatomic, readonly) bool hasMigratedDisabledDataSources;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUpNextFaceCurrentlyActive;
@property (nonatomic, retain) NSSet *phoneThirdPartyDataSources;
@property (readonly) Class superclass;
@property (nonatomic) bool watchHasMigratedAvailableDataSources;
@property (nonatomic, retain) NSSet *watchThirdPartyDataSources;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeDeviceDidChange:(id)arg1;
- (void)_disabledDataSourcesDidChange;
- (id)_domainAccesor;
- (void)_fetchNewFaceCollection;
- (void)_synchronizeDefaultsForKeys:(id)arg1;
- (void)_thirdPartyDataSourcesDidChange;
- (id)disabledDataSources;
- (void)faceCollectionDidLoad:(id)arg1;
- (bool)hasMigratedDataSources;
- (bool)hasMigratedDisabledDataSources;
- (id)init;
- (bool)isUpNextFaceCurrentlyActive;
- (void)migrateIfNecessary;
- (id)phoneThirdPartyDataSources;
- (void)setDisabledDataSources:(id)arg1;
- (void)setPhoneThirdPartyDataSources:(id)arg1;
- (void)setWatchHasMigratedAvailableDataSources:(bool)arg1;
- (void)setWatchThirdPartyDataSources:(id)arg1;
- (bool)watchHasMigratedAvailableDataSources;
- (id)watchThirdPartyDataSources;

@end
