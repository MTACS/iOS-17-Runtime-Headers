
@interface HDCachedSyncRequestEntity : HDHealthEntity

+ (bool)clearInProgressSyncRequests:(id)arg1 error:(id*)arg2;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)fetchAllInProgressSyncRequests:(id)arg1 error:(id*)arg2;
+ (id)fetchAllSyncRequests:(id)arg1 error:(id*)arg2;
+ (id)fetchCoalescedSyncRequest:(id)arg1 error:(id*)arg2;
+ (bool)insertSyncRequest:(id)arg1 reason:(id)arg2 date:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)markInProgressRequestsAsPending:(id)arg1 error:(id*)arg2;
+ (bool)markPendingRequestsAsInProgress:(id)arg1 error:(id*)arg2;
+ (long long)protectionClass;

@end
