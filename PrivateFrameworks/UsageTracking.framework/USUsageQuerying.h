
@interface USUsageQuerying : NSObject {
    <_CDUserContext> * _context;
    BMCoreDuetStream * _duetStream;
}

@property (readonly) <_CDUserContext> *context;
@property (readonly) BMCoreDuetStream *duetStream;

+ (id)getLocalDeviceIdentifierAndReturnError:(id*)arg1;
+ (void)synchronizeUsageWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_computeApplicationUsageWithEvents:(id)arg1 unboundApplicationUsageIntervalsByDevice:(id*)arg2 timeZoneByDevice:(id)arg3 lastEventDateByDevice:(id)arg4 categoryUsageIntervalsByDevice:(id)arg5 aggregatedApplicationUsageIntervalsByDevice:(id)arg6 categoryByBundleIdentifier:(id)arg7 partition:(id)arg8 referenceDate:(id)arg9 focalOnly:(bool)arg10;
- (id)_computeNotificationsWithEvents:(id)arg1 timeZoneByDevice:(id)arg2 lastEventDateByDevice:(id)arg3 partition:(id)arg4;
- (void)_computeNowPlayingUsageWithEvents:(id)arg1 categoryUsageIntervalsByDevice:(id)arg2 timeZoneByDevice:(id)arg3 lastEventDateByDevice:(id)arg4 partition:(id)arg5 referenceDate:(id)arg6;
- (id)_computeScreenTime:(bool)arg1 withEvents:(id)arg2 intersectingScreenTimeIntervalsByDevice:(id*)arg3 longestSessionByDevice:(id*)arg4 timeZoneByDevice:(id)arg5 lastEventDateByDevice:(id)arg6 partition:(id)arg7 referenceDate:(id)arg8;
- (void)_computeUncategorizedLocalWebUsageWithWebUsageEvents:(id)arg1 uncategorizedDomains:(id)arg2 interval:(id)arg3 referenceDate:(id)arg4 completionHandler:(id /* block */)arg5;
- (double)_computeUsageForApplications:(id)arg1 webDomains:(id)arg2 categories:(id)arg3 applicationUsageEvents:(id)arg4 webUsageEvents:(id)arg5 nowPlayingEvents:(id)arg6 videoUsageEvents:(id)arg7 categoryByBundleIdentifier:(id)arg8 categoryByWebDomain:(id)arg9 interval:(id)arg10 referenceDate:(id)arg11 focalOnly:(bool)arg12;
- (void)_computeUsageWithDisplayBacklitEvents:(id)arg1 applicationUsageEvents:(id)arg2 webUsageEvents:(id)arg3 nowPlayingEvents:(id)arg4 videoUsageEvents:(id)arg5 notificationEvents:(id)arg6 categoryByBundleIdentifier:(id)arg7 categoryByWebDomain:(id)arg8 interval:(id)arg9 partitionInterval:(double)arg10 referenceDate:(id)arg11 focalOnly:(bool)arg12 completionHandler:(id /* block */)arg13;
- (id)_computeWebUsageWithEvents:(id)arg1 timeZoneByDevice:(id)arg2 lastEventDateByDevice:(id)arg3 categoryUsageIntervalsByDevice:(id)arg4 aggregatedApplicationUsageIntervalsByDevice:(id)arg5 aggregatedWebUsageIntervalsByDevice:(id)arg6 categoryByWebDomain:(id)arg7 partition:(id)arg8 referenceDate:(id)arg9 focalOnly:(bool)arg10;
- (id)_currentNowPlayingUsageIntervalsDuringInterval:(id)arg1 referenceDate:(id)arg2;
- (id)_currentScreenTimeIntervalDuringInterval:(id)arg1 usageStartDate:(id*)arg2 referenceDate:(id)arg3;
- (void)_enumerateCurrentApplicationUsageIntervalsDuringInterval:(id)arg1 referenceDate:(id)arg2 focalOnly:(bool)arg3 block:(id /* block */)arg4;
- (void)_enumerateCurrentVideoUsageIntervalsDuringInterval:(id)arg1 referenceDate:(id)arg2 block:(id /* block */)arg3;
- (void)_enumerateCurrentWebUsageIntervalsDuringInterval:(id)arg1 referenceDate:(id)arg2 focalOnly:(bool)arg3 block:(id /* block */)arg4;
- (void)_enumerateEvents:(id)arg1 intervalEndDate:(id)arg2 block:(id /* block */)arg3;
- (id)_generatePickupsByBundleIdentifierWithPickupIntervals:(id)arg1 applicationUsageIntervals:(id)arg2 pickupsWithoutApplicationUsage:(unsigned long long*)arg3 firstPickup:(id*)arg4;
- (id)_generateUncategorizedLocalWebUsageWithWebUsageIntervals:(id)arg1 uncategorizedDomains:(id)arg2;
- (double)_generateUsageTimeWithApplicationUsageIntervals:(id)arg1 webUsageIntervalsByDevice:(id)arg2 categoryUsageIntervalsByDevice:(id)arg3 aggregatedApplicationUsageIntervalsByDevice:(id)arg4 aggregatedWebUsageIntervalsByDevice:(id)arg5 categoryByBundleIdentifier:(id)arg6 categoryByWebDomain:(id)arg7 applications:(id)arg8 webDomains:(id)arg9 categories:(id)arg10;
- (id)_getBundleIdentiersFromApplicationUsageEvents:(id)arg1 videoUsageEvents:(id)arg2 interval:(id)arg3 referenceDate:(id)arg4 focalOnly:(bool)arg5;
- (id)_getWebDomainsFromWebUsageEvents:(id)arg1 videoUsageEvents:(id)arg2 interval:(id)arg3 referenceDate:(id)arg4 focalOnly:(bool)arg5;
- (id)_newReportWithNonIntersectingScreenTimeIntervals:(id)arg1 pickupsByBundleIdentifier:(id)arg2 pickupsWithoutApplicationUsage:(unsigned long long)arg3 firstPickup:(id)arg4 longestSession:(id)arg5 applicationUsageIntervals:(id)arg6 webUsageIntervals:(id)arg7 categoryUsageIntervals:(id)arg8 aggregatedApplicationUsageIntervals:(id)arg9 aggregatedWebUsageIntervals:(id)arg10 categoryByBundleIdentifier:(id)arg11 categoryByWebDomain:(id)arg12 notifications:(id)arg13 interval:(id)arg14 timeZone:(id)arg15 lastEventDate:(id)arg16;
- (void)_updateApplicationUsageWithInterval:(id)arg1 unboundInterval:(id)arg2 bundleIdentifier:(id)arg3 trustedApplicationUsage:(bool)arg4 deviceIdentifier:(id)arg5 event:(id)arg6 applicationUsageIntervalsByDevice:(id)arg7 unboundApplicationUsageIntervalsByDevice:(id)arg8 categoryUsageIntervalsByDevice:(id)arg9 aggregatedApplicationUsageIntervalsByDevice:(id)arg10 categoryByBundleIdentifier:(id)arg11 timeZoneByDevice:(id)arg12 lastEventDateByDevice:(id)arg13;
- (void)_updateLocalReports:(id)arg1 remoteReports:(id)arg2 aggregateReports:(id)arg3 nonIntersectingScreenTimeIntervals:(id)arg4 intersectingScreenTimeIntervals:(id)arg5 longestSessionByDevice:(id)arg6 applicationUsageIntervals:(id)arg7 unboundApplicationUsageIntervals:(id)arg8 webUsageIntervalsByDevice:(id)arg9 categoryUsageIntervalsByDevice:(id)arg10 aggregatedApplicationUsageIntervalsByDevice:(id)arg11 aggregatedWebUsageIntervalsByDevice:(id)arg12 categoryByBundleIdentifier:(id)arg13 categoryByWebDomain:(id)arg14 notificationsByDevice:(id)arg15 interval:(id)arg16 timeZoneByDevice:(id)arg17 lastEventDateByDevice:(id)arg18;
- (void)_updateNotificationsWithEvent:(id)arg1 bundleIdentifier:(id)arg2 trustedNotification:(bool)arg3 deviceIdentifier:(id)arg4 notificationsByDevice:(id)arg5 timeZoneByDevice:(id)arg6 lastEventDateByDevice:(id)arg7;
- (void)_updateNowPlayingUsageWithInterval:(id)arg1 event:(id)arg2 deviceIdentifier:(id)arg3 categoryUsageIntervalsByDevice:(id)arg4 timeZoneByDevice:(id)arg5 lastEventDateByDevice:(id)arg6;
- (void)_updateScreenTimeWithInterval:(id)arg1 rawInterval:(id)arg2 deviceIdentifier:(id)arg3 partition:(id)arg4 event:(id)arg5 nonIntersectingScreenTimeIntervalsByDevice:(id)arg6 intersectingScreenTimeIntervalsByDevice:(id)arg7 longestSessionByDevice:(id)arg8 timeZoneByDevice:(id)arg9 lastEventDateByDevice:(id)arg10;
- (void)_updateWebUsageWithInterval:(id)arg1 webDomain:(id)arg2 trustedWebUsage:(bool)arg3 deviceIdentifier:(id)arg4 event:(id)arg5 webUsageIntervalsByDevice:(id)arg6 categoryUsageIntervalsByDevice:(id)arg7 aggregatedApplicationUsageIntervalsByDevice:(id)arg8 aggregatedWebUsageIntervalsByDevice:(id)arg9 categoryByWebDomain:(id)arg10 timeZoneByDevice:(id)arg11 lastEventDateByDevice:(id)arg12;
- (id)context;
- (id)duetStream;
- (id)init;
- (id)initWithContext:(id)arg1 coreDuetStream:(id)arg2;
- (id)initWithContext:(id)arg1 eventStorage:(id)arg2;
- (id)queryForApplications:(id)arg1 webDomains:(id)arg2 categories:(id)arg3 interval:(id)arg4 error:(id*)arg5;
- (id)queryForApplications:(id)arg1 webDomains:(id)arg2 categories:(id)arg3 interval:(id)arg4 focalOnly:(bool)arg5 error:(id*)arg6;
- (id)queryForApplications:(id)arg1 webDomains:(id)arg2 categories:(id)arg3 interval:(id)arg4 segmentInterval:(double)arg5 error:(id*)arg6;
- (void)queryForUncategorizedLocalWebUsageDuringInterval:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)queryUsageDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)queryUsageDuringInterval:(id)arg1 partitionInterval:(double)arg2 focalOnly:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
