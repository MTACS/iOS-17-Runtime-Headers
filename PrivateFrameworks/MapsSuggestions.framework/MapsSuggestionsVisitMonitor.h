
@interface MapsSuggestionsVisitMonitor : NSObject <MapsSuggestionsLocationVisitUpdaterDelegate, MapsSuggestionsObject> {
    bool  _isInVisit;
    MapsSuggestionsBlockCondition * _isInVisitCondition;
    CLVisit * _latestVisit;
    <MapsSuggestionsLocationUpdater> * _locationUpdater;
    MapsSuggestionsSimpleTrigger * _onEnterTrigger;
    MapsSuggestionsSimpleTrigger * _onExitTrigger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MapsSuggestionsCondition> *isInVisitCondition;
@property (nonatomic, readonly) CLVisit *latestVisit;
@property (nonatomic, readonly) <MapsSuggestionsTrigger> *onEnterTrigger;
@property (nonatomic, readonly) <MapsSuggestionsTrigger> *onExitTrigger;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)didEnterVisit:(id)arg1;
- (void)didLeaveVisit:(id)arg1;
- (void)didLoseLocationPermission;
- (void)didUpdateLocation:(id)arg1;
- (id)initWithLocationUpdater:(id)arg1 startInVisit:(bool)arg2;
- (bool)isInVisit;
- (id)isInVisitCondition;
- (id)latestVisit;
- (id)onEnterTrigger;
- (id)onExitTrigger;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)uniqueName;

@end
