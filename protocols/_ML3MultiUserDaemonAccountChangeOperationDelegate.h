
@protocol _ML3MultiUserDaemonAccountChangeOperationDelegate <NSObject>

@required

- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(_ML3MultiUserDaemonAccountChangeOperation *)arg1 newDatabasePath:(NSString *)arg2;
- (NSString *)databasePathForDSID:(NSString *)arg1;
- (bool)shouldExecuteAccountChangeOperation:(_ML3MultiUserDaemonAccountChangeOperation *)arg1 reason:(id*)arg2;

@end
