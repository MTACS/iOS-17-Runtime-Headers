
@interface BRCServerChangesApplyUtil : NSObject

+ (bool)checkEarlyExitsPriorToApplying:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 zone:(id)arg5 session:(id)arg6 isDeleteOfShareRoot:(bool)arg7 diffs:(unsigned long long)arg8 clientZone:(id)arg9;
+ (bool)deletingShareRoot:(id)arg1 localItem:(id)arg2;
+ (bool)handleApplyChangesForUnliveServerItem:(id)arg1 isDeleteOfShareRoot:(bool)arg2 rank:(long long)arg3 scheduler:(id)arg4 zone:(id)arg5 session:(id)arg6;
+ (bool)handleEtagsChangesOnly:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 zone:(id)arg5 diffs:(unsigned long long*)arg6 needsSave:(bool*)arg7;
+ (bool)handleNonRevivedItemIfNecessary:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 zone:(id)arg5;
+ (bool)shouldForceApplyContentForItem:(id)arg1;

@end
