
@interface ATXNotificationManagementInspector : NSObject

- (bool)clearAllNotificationData:(id*)arg1;
- (id)constructStacksForNotifications:(id)arg1;
- (id)constructStacksGroupedByAppForNotifications:(id)arg1;
- (id)fetchNotificationsFromBiomeFromStartDate:(id)arg1 endDate:(id)arg2 outError:(id*)arg3;
- (id)fetchNotificationsFromCoreDuetFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)fetchNotificationsFromDbFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)fetchNotificationsFromFileData:(id)arg1 outError:(id*)arg2;
- (id)fetchNotificationsFromSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldInferMessages:(bool)arg4 outError:(id*)arg5;
- (id)fetchSerializedAppGroupedNotificationDigestFromSource:(id)arg1 digestTimeString:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 shouldInferMessages:(bool)arg5 outError:(id*)arg6;
- (id)fetchSerializedMissedNotificationRankingFromFileData:(id)arg1 modeString:(id)arg2 outError:(id*)arg3;
- (id)fetchSerializedMissedNotificationRankingFromSource:(id)arg1 modeString:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 shouldInferMessages:(bool)arg5 outError:(id*)arg6;
- (id)fetchSerializedNotificationDigestFromFileData:(id)arg1 digestTimeString:(id)arg2 outError:(id*)arg3;
- (id)fetchSerializedNotificationDigestFromSource:(id)arg1 digestTimeString:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 shouldInferMessages:(bool)arg5 outError:(id*)arg6;
- (id)fetchSerializedNotificationsFromSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldInferMessages:(bool)arg4 outError:(id*)arg5;
- (id)logAndCreateErrorForString:(id)arg1;

@end
