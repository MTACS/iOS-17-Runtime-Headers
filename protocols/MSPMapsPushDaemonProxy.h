
@protocol MSPMapsPushDaemonProxy

@required

- (void)clearAirportArrivalBulletin;
- (void)clearBulletinWithRecordID:(NSString *)arg1;
- (void)clearCurrentAnnouncement;
- (void)clearLowFuelAlertBulletin;
- (void)clearMapsSuggestionsBulletin;
- (void)clearParkedCarBulletin;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(NSData *)arg1;
- (void)clearVenueBulletin;
- (void)fetchCurrentAnnouncement:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAnnouncement *, void*
- (void)fetchDevicePushToken:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)handleMapsApplicationRemoval:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetAnnouncements;
- (void)showAirportArrivalBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 mapRegion:(GEOMapRegion *)arg3 regionName:(NSString *)arg4;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(MSPLowFuelDetails *)arg1;
- (void)showMapsSuggestionsBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 actionURL:(NSURL *)arg3;
- (void)showParkedCarBulletinForEvent:(RTVehicleEvent *)arg1;
- (void)showParkedCarReplacementBulletinForEvent:(RTVehicleEvent *)arg1 replacingEvent:(RTVehicleEvent *)arg2;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(GEOCommuteNotificationDetails *)arg1;
- (void)showTrafficIncidentAlertWithID:(NSData *)arg1 withReroute:(bool)arg2 title:(NSString *)arg3 description:(NSString *)arg4;
- (void)showVenueBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 actionURL:(NSURL *)arg3;
- (void)simulateProblemResolution;
- (void)simulateRAPStatusChangeNotification;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)simulateUGCPhotoSubmissionResolution;

@end
