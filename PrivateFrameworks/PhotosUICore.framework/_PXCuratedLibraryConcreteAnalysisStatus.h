
@interface _PXCuratedLibraryConcreteAnalysisStatus : PXCuratedLibraryAnalysisStatus <PXAssetsDataSourceManagerObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeviceUnplugged;
@property (readonly) Class superclass;

- (long long)_analyzingStateForDataSource:(id)arg1;
- (void)_batteryStateDidChange:(id)arg1;
- (void)_configureBatteryMonitoring;
- (float)_enrichmentProgressForDataSource:(id)arg1;
- (void)_updateStatusProperties;
- (void)alternateTitleIndexDidChange;
- (bool)hasBattery;
- (id)initWithDataSourceManager:(id)arg1;
- (bool)isDeviceUnplugged;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
