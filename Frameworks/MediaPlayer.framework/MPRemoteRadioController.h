
@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate> {
    RadioAvailabilityController * _availabilityController;
    NSMutableSet * _connections;
    bool  _hasRefreshedStations;
    NSXPCListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RadioRecentStationsController * _recentStationsController;
}

@property (nonatomic, readonly) RadioAvailabilityController *availabilityController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RadioRecentStationsController *recentStationsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_handleRecentStationsControllerDidChange;
- (void)_playActivityReportingControllerDidFlushEventsNotification:(id)arg1;
- (void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1;
- (void)_recentStationsControllerDidChangeStationsNotification:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (id)availabilityController;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)recentStationsController;
- (void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(id /* block */)arg1;
- (void)start;

@end
