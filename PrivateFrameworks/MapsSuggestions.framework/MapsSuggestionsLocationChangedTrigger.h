
@interface MapsSuggestionsLocationChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate> {
    <MapsSuggestionsLocationUpdater> * _forcingLocationUpdater;
    MapsSuggestionsCanKicker * _locationForceUpdate;
    double  _locationForceUpdateTime;
    <MapsSuggestionsLocationUpdater> * _locationUpdater;
    double  _minDistance;
    CLLocation * _previousLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)_forceLocationUpdate;
- (void)changeMinDistance:(double)arg1;
- (void)didAddFirstObserver;
- (void)didLoseLocationPermission;
- (void)didRemoveLastObserver;
- (void)didUpdateLocation:(id)arg1;
- (id)initWithLocationUpdater:(id)arg1;
- (id)initWithLocationUpdater:(id)arg1 forcingLocationUpdater:(id)arg2;
- (void)restartWithUpdateTime:(double)arg1;
- (void)startWithMinimumDistance:(double)arg1;
- (void)startWithMinimumUpdateTime:(double)arg1 minimumDistance:(double)arg2;
- (void)stop;

@end
