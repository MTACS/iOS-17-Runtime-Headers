
@interface ATXModeAppUsageManager : NSObject

- (id)_allAppsInAppUsageStream:(id)arg1;
- (id)_allAppsInNotificationStream:(id)arg1;
- (id)_appCategoriesForBundleIDs:(id)arg1;
- (id)_appCategoryFromBundleId:(id)arg1;
- (id)_appUsageStatsTupleFromModeStream:(id)arg1 andAppUsageStream:(id)arg2;
- (id)_appsNamesForBundleIDs:(id)arg1;
- (id)_calculateResponseTimeStatistics:(id)arg1;
- (id)_deviceUnlockActivityFromModeStream:(id)arg1 andDeviceLockStream:(id)arg2;
- (id)_dndUsageFromModeStream:(id)arg1 andDNDUsageStream:(id)arg2;
- (bool)_findModeForEventStartDate:(id)arg1 withModeStream:(id)arg2 andCurrentModePointer:(unsigned long long*)arg3;
- (id)_formatModeStream:(id)arg1;
- (id)_mapNotificationIdToBundleId:(id)arg1;
- (id)_modeAppUsageDataFrom:(id)arg1 toDate:(id)arg2 duetHelper:(id)arg3;
- (id)_modeStatsTupleFromModeStream:(id)arg1;
- (id)_notificationUsageDataFromModeStream:(id)arg1 andNotificationUsageStream:(id)arg2;
- (id)_peopleInteractionsFromModeStream:(id)arg1;
- (id)_populateInteractionDataByMode:(id)arg1 withModeStream:(id)arg2 andInteractionStream:(id)arg3 andInteractionType:(id)arg4;
- (id)_queryCDInteractionsOfMechanismTypes:(id)arg1 withCDInteractionStore:(id)arg2 from:(id)arg3 to:(id)arg4;
- (id)appUsageDataByModeFromStartDate:(id)arg1 toEndDate:(id)arg2 duetHelper:(id)arg3;

@end
