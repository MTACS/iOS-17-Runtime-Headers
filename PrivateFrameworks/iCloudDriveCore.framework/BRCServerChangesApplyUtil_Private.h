
@interface BRCServerChangesApplyUtil_Private : NSObject

+ (bool)_handleApplyingDeletedUnlistedDirectoryIfNecessary:(id)arg1 localItem:(id)arg2 parent:(id)arg3;
+ (bool)appLibraryUndergoingCZM:(id)arg1 zone:(id)arg2 rank:(long long)arg3 parentID:(id)arg4 scheduler:(id)arg5 session:(id)arg6;
+ (bool)itemUndergoingCZMToAnotherZone:(id)arg1 si:(id)arg2 clientZone:(id)arg3 rank:(long long)arg4 scheduler:(id)arg5 zone:(id)arg6;
+ (bool)localItemHasUnsyncedChanges:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 clientZone:(id)arg5 zone:(id)arg6 isDeleteOfShareRoot:(bool)arg7 session:(id)arg8;
+ (bool)serverItemDeadWithNoLiveLocalItem:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 clientZone:(id)arg5 zone:(id)arg6;
+ (bool)serverItemWouldBeParentedToDeadFolder:(id)arg1 si:(id)arg2 rank:(long long)arg3 scheduler:(id)arg4 zone:(id)arg5 diffs:(unsigned long long)arg6;

@end
