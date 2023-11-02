
@interface DAAccountChangeHandler : NSObject

+ (id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)_cleanupStoreForDisabledAccount:(id)arg1 inStore:(id)arg2;
+ (id)_findSubscribedCalendarForAccount:(id)arg1 inEventStore:(id)arg2;
+ (bool)_handleAccountAddOrModify:(id)arg1 withChangeInfo:(id)arg2 inStore:(id)arg3 accountUpdater:(id)arg4;
+ (void)_handleAccountDelete:(id)arg1 withChangeInfo:(id)arg2 inStore:(id)arg3;
+ (bool)_handleCalDAVAccountModifiedByDataAccess:(id)arg1 withChangeInfo:(id)arg2 inStore:(id)arg3 accountUpdater:(id)arg4;
+ (bool)_handleChangeToSubscribedCalendar:(id)arg1 withChangeInfo:(id)arg2 inStore:(id)arg3 accountUpdater:(id)arg4;
+ (void)_performBlockWithGenericClientDBForAccount:(id)arg1 block:(id /* block */)arg2;
+ (id)_pickAccountToKeepWithAccount:(id)arg1 andAccount:(id)arg2;
+ (bool)_sanityCheckCalDAVAccount:(id)arg1 accountChangeInfo:(id)arg2;
+ (bool)_sanityCheckChildAccountOfType:(id)arg1 withParent:(id)arg2 accountChangeInfo:(id)arg3 inStore:(id)arg4 updater:(id)arg5;
+ (bool)_sanityCheckChildDAVAccount:(id)arg1 withParent:(id)arg2 accountChangeInfo:(id)arg3;
+ (bool)_sanityCheckChildSubCalAccountsWithParent:(id)arg1 inStore:(id)arg2 accountUpdater:(id)arg3;
+ (bool)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)arg1;
+ (bool)_sanityCheckSubscribedCalendarAccountInfo:(id)arg1;
+ (void)_setupStoreForNewAccount:(id)arg1;
+ (id)_supportedChildAccountTypesForParentAccountType:(id)arg1;
+ (bool)_updateCalendarFromAccount:(id)arg1;
+ (bool)_updateSubscribedCalendarAccountProperties:(id)arg1;
+ (void)handleAccountDidChange:(id)arg1 withChangeInfo:(id)arg2 store:(id)arg3;
+ (bool)handleAccountWillChange:(id)arg1 withChangeInfo:(id)arg2 store:(id)arg3 accountUpdater:(id)arg4;

@end
