
@interface PXCuratedLibraryAnalysisStatus : PXObservable <PXMutableCuratedLibraryAnalysisStatus> {
    long long  _alternateTitleIndex;
    NSTimer * _alternateTitleTimer;
    PXCuratedLibraryAssetsDataSourceManager * _dataSourceManager;
    float  _displayProgress;
    <PXCuratedLibraryEventTracker> * _eventTracker;
    bool  _hasBattery;
    bool  _isDaysMonthsYearsStructureEnabled;
    bool  _isDevicePlugged;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    long long  _numberOfRequestsToCycleThroughAlternateTitles;
    float  _progress;
    long long  _state;
}

@property (nonatomic, readonly) long long alternateTitleIndex;
@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float displayProgress;
@property (nonatomic, retain) <PXCuratedLibraryEventTracker> *eventTracker;
@property (nonatomic, readonly) bool hasBattery;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDaysMonthsYearsStructureEnabled;
@property (nonatomic, readonly) bool isDevicePlugged;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAlternateTitleTimer:(id)arg1;
- (id)_initWithDataSourceManager:(id)arg1;
- (void)_updateEventsTracking;
- (long long)alternateTitleIndex;
- (void)alternateTitleIndexDidChange;
- (void)cycleToNextAlternateTitle;
- (id)dataSourceManager;
- (void)dealloc;
- (id)description;
- (void)didPerformChanges;
- (float)displayProgress;
- (id)eventTracker;
- (bool)hasBattery;
- (id)initWithDataSourceManager:(id)arg1;
- (bool)isDaysMonthsYearsStructureEnabled;
- (bool)isDevicePlugged;
- (id)localizedDescription;
- (id)localizedTitle;
- (float)progress;
- (void)setDisplayProgress:(float)arg1;
- (void)setEventTracker:(id)arg1;
- (void)setIsDaysMonthsYearsStructureEnabled:(bool)arg1;
- (void)setIsDevicePlugged:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setState:(long long)arg1;
- (void)startCyclingThroughAlternateTitles;
- (long long)state;
- (void)stopCyclingThroughAlternateTitles;

@end
