
@interface DAStoreSyncStatusUpdater : NSObject

+ (unsigned long long)_accountErrorCodeForNSError:(id)arg1;
+ (unsigned long long)_codeForLastSyncError:(id)arg1 userInfo:(id*)arg2;
+ (unsigned long long)_ekAccountErrorFromCoreDAVErrorCode:(int)arg1;
+ (unsigned long long)_ekAccountErrorFromCoreDAVHTTPStatusCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromDAErrorCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromDAValidationErrorCode:(unsigned long long)arg1;
+ (unsigned long long)_ekAccountErrorFromSubCalErrorCode:(long long)arg1;
+ (unsigned long long)_ekAccountErrorFromURLError:(id)arg1;
+ (id)_eventStore;
+ (id)_eventStorePurger;
+ (bool)_isCanceledError:(id)arg1;
+ (id)_mappedAccountErrorFromError:(id)arg1;
+ (void)_updateStatusForCalendar:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(bool)arg5;
+ (void)_updateStatusForCalendarWithExternalID:(id)arg1 sourceExternalID:(id)arg2 lastSyncStartDate:(id)arg3 lastSyncEndDate:(id)arg4 lastSyncError:(id)arg5 canceled:(bool)arg6;
+ (void)_updateStatusForSource:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(bool)arg5;
+ (void)_updateStatusForStoreWithExternalID:(id)arg1 lastSyncStartDate:(id)arg2 lastSyncEndDate:(id)arg3 lastSyncError:(id)arg4 canceled:(bool)arg5;
+ (void)resetSyncStatusForAllStoresIfNecessary;
+ (void)resetSyncStatusIfNecessaryForStoresOfType:(unsigned long long)arg1;
+ (void)syncEndedForCalendar:(id)arg1 withError:(id)arg2;
+ (void)syncEndedForCalendarWithExternalID:(id)arg1 sourceExternalID:(id)arg2 withError:(id)arg3;
+ (void)syncEndedForStoreWithExternalID:(id)arg1 withError:(id)arg2;
+ (void)syncStartedForCalendar:(id)arg1;
+ (void)syncStartedForCalendarWithExternalID:(id)arg1 sourceExternalID:(id)arg2;
+ (void)syncStartedForStoreWithExternalID:(id)arg1;

@end
