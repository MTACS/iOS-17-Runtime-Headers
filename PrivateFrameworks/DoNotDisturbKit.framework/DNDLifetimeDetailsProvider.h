
@interface DNDLifetimeDetailsProvider : NSObject <CLLocationManagerDelegate> {
    NSArray * _availableLifetimeDetails;
    EKCalendarVisibilityManager * _calendarVisibilityManager;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    _CLPlaceInference * _currentPlaceInference;
    <DNDLifetimeDetailsProviderDelegate> * _delegate;
    EKEventStore * _eventStore;
    NSObject<OS_dispatch_queue> * _eventStoreQueue;
    CLLocationManager * _locationManager;
    bool  _monitoringLifetimes;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimer * _refreshTimer;
    EKEvent * _relevantEvent;
}

@property (nonatomic, readonly, copy) NSArray *availableLifetimeDetails;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDLifetimeDetailsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_eventStoreQueue_eventForCalendarEventLifetime:(id)arg1;
- (void)_eventStoreQueue_requestRelevantEvent;
- (id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)arg1;
- (id)_nextRefreshTimerFireDate;
- (void)_queue_gotPlaceInferences:(id)arg1;
- (void)_queue_rebuildAvailableLifetimeDetails;
- (void)_queue_requestLifetimeDetails;
- (void)_queue_resetLifetimeDetails;
- (void)_queue_scheduleRefreshTimerIfNeeded;
- (void)_requestRelevantLocationMetadata;
- (void)_scheduleRefreshTimerIfNeeded;
- (void)_systemTimeChanged;
- (id)availableLifetimeDetails;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)lifetimeDetailsForAssertionDetails:(id)arg1 error:(id*)arg2;
- (void)lifetimeDetailsWithMetadataForAssertionDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)lifetimeForLifetimeDetails:(id)arg1 error:(id*)arg2;
- (void)requestLifetimeDetails;
- (void)resetLifetimeDetails;
- (void)setDelegate:(id)arg1;
- (void)startUpdatingLifetimeDetailMetadata;
- (void)startUpdatingLifetimeDetails;
- (void)stopUpdatingLifetimeDetailMetadata;
- (void)stopUpdatingLifetimeDetails;

@end
