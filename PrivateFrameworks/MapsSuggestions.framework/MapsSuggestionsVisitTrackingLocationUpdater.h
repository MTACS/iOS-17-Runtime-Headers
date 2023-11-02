
@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate> {
    CLVisit * _currentVisit;
    double  _distanceBuffer;
    CLLocation * _latestLocation;
    MapsSuggestionsObservers * _locationObservers;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    MapsSuggestionsObservers * _visitObservers;
    <MapsSuggestionsLocationUpdater> * _wrappedLocationUpdater;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)_isDefinitelyOutsideOfVisit:(id)arg1 location:(id)arg2 allowingBuffer:(double)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)awaitQueue;
- (void)dealloc;
- (void)didEnterVisit:(id)arg1;
- (void)didLeaveVisit:(id)arg1;
- (void)didLoseLocationPermission;
- (void)didUpdateLocation:(id)arg1;
- (id)initDecoratingLocationUpdater:(id)arg1;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)uniqueName;

@end
