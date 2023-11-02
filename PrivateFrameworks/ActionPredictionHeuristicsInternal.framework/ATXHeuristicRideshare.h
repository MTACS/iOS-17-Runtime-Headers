
@interface ATXHeuristicRideshare : NSObject <ATXContextHeuristicProtocol> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    int  _currentStatus;
    NSObject<OS_nw_path> * _networkPath;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_appRegistrationChange:(id)arg1;
+ (void)subscribeNotification;

- (void).cxx_destruct;
- (id)_dateIntervalWithEvent:(id)arg1;
- (id)_rideShareSuggestionActionForDestination:(id)arg1 heuristicDevice:(id)arg2 flightInformationSchema:(id)arg3 predictionReasons:(unsigned long long)arg4 score:(double)arg5 validFromStartDate:(id)arg6 validToEndDate:(id)arg7 dateInterval:(id)arg8;
- (void)dealloc;
- (id)heuristicResultWithEnvironment:(id)arg1;
- (id)init;
- (id)permanentRefreshTriggers;
- (id)rideShareAppWithHeuristicDevice:(id)arg1;
- (id)rideShareSuggestionActionForEvent:(id)arg1 heuristicDevice:(id)arg2 predictionReasons:(unsigned long long)arg3 score:(double)arg4 validFromStartDate:(id)arg5 validToEndDate:(id)arg6;
- (void)sendRefreshNotificationIfRequired:(id)arg1;
- (void)setupCellularNetworkMonitoring;
- (id)suggestionForConcludedFlightWithHeuristicDevice:(id)arg1;
- (id)suggestionForUpcomingFlightWithHeuristicDevice:(id)arg1;

@end
