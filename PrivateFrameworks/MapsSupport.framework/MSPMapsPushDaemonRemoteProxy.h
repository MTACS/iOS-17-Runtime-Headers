
@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection * _connection;
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearConnection;
- (void)_connectToDaemonIfNeeded;
- (id)_connection;
- (id)_remoteObjectProxy;
- (void)addObserver:(id)arg1;
- (void)clearAirportArrivalBulletin;
- (void)clearBulletinWithRecordID:(id)arg1;
- (void)clearCurrentAnnouncement;
- (void)clearLowFuelAlertBulletin;
- (void)clearMapsSuggestionsBulletin;
- (void)clearParkedCarBulletin;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)arg1;
- (void)clearVenueBulletin;
- (void)closeConnection;
- (void)fetchCurrentAnnouncement:(id /* block */)arg1;
- (void)fetchDevicePushToken:(id /* block */)arg1;
- (void)handleMapsApplicationRemoval:(id /* block */)arg1;
- (id)init;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)resetAnnouncements;
- (void)showAirportArrivalBulletinWithTitle:(id)arg1 message:(id)arg2 mapRegion:(id)arg3 regionName:(id)arg4;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1;
- (void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)showParkedCarBulletinForEvent:(id)arg1;
- (void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;
- (void)showTrafficIncidentAlertWithID:(id)arg1 withReroute:(bool)arg2 title:(id)arg3 description:(id)arg4;
- (void)showVenueBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
- (void)simulateProblemResolution;
- (void)simulateRAPStatusChangeNotification;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)simulateUGCPhotoSubmissionResolution;

@end
