
@interface CUIKSubscribedCalendarManager : NSObject {
    unsigned long long  _accountsSaveMonitoringToken;
    unsigned long long  _calendarSaveMonitoringToken;
}

- (id)_accountDescriptionForCalendar:(id)arg1;
- (id)_createCalDAVChildSubCalAccountForCalendar:(id)arg1 inAccountStore:(id)arg2;
- (id)_createLocalSubCalAccountForCalendar:(id)arg1 inAccountStore:(id)arg2;
- (id)_createSubcalAccountForCalendar:(id)arg1 inAccountStore:(id)arg2 newAccountNeedsSaving:(bool*)arg3;
- (void)_saveAccount:(id)arg1 inStore:(id)arg2 updated:(bool)arg3;
- (void)_updateAccount:(id)arg1 inAccountStore:(id)arg2 withCalendar:(id)arg3 oldAccount:(id)arg4 newAccountDirty:(bool)arg5 newUsername:(id)arg6 newPassword:(id)arg7 newAllowsInsecureConnections:(bool)arg8;
- (void)restartDAAfterAccountUpdates;
- (void)restartDAAfterCalendarUpdates;
- (void)shutdownDAForAccountUpdates;
- (void)shutdownDAForCalendarUpdates;
- (void)updateOrCreateAccountWithCalendar:(id)arg1 previousAccountID:(id)arg2 newUsername:(id)arg3 newPassword:(id)arg4 newAllowsInsecureConnections:(bool)arg5;

@end
