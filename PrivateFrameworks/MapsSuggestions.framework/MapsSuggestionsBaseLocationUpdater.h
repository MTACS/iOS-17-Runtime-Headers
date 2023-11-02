
@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater> {
    MapsSuggestionsObservers * _locationObservers;
    NSString * _name;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    MapsSuggestionsObservers * _visitObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)awaitQueue;
- (void)considerMyAllowanceAsLimited:(bool)arg1;
- (void)considerMyNewLocation:(id)arg1;
- (void)considerMyNewVisit:(id)arg1;
- (unsigned long long)countLocationObservers;
- (void)dealloc;
- (id)dispatchQueue;
- (bool)hasObservers;
- (id)initWithName:(id)arg1 queue:(id)arg2;
- (void)onStartImplementation;
- (void)onStopImplementation;
- (id)restartLocationUpdatesForDelegate:(id)arg1;
- (id)startLocationUpdatesForDelegate:(id)arg1;
- (void)stopLocationUpdatesForDelegate:(id)arg1;
- (id)uniqueName;

@end
