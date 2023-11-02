
@interface FCModifyUserEventHistoryCommand : FCModifyRecordsCommand

- (id)ckRecordWithSessionID:(id)arg1 data:(id)arg2;
- (id)initWithSessionID:(id)arg1 data:(id)arg2;
- (id)initWithSessions:(id)arg1;
- (bool)mergeLocalRecord:(id)arg1 withRemoteRecord:(id)arg2;

@end
