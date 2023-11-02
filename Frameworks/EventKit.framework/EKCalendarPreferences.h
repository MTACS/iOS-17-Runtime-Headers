
@interface EKCalendarPreferences : NSObject <EKNotificationPreferences> {
    CalPreferences * _calPreferences;
    CalPreferences * _preferences;
}

@property (retain) CalPreferences *calPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invitationNotificationsDisabled;
@property (nonatomic) bool sharedCalendarNotificationsDisabled;
@property (readonly) Class superclass;

+ (id)calendarPreferences;

- (void).cxx_destruct;
- (bool)_checkedStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 withKey:(id)arg3;
- (id)_disabledOrCollapsedItemsForDelegateID:(id)arg1 withKey:(id)arg2;
- (unsigned long long)_displayOrderForSourceWithIdentifier:(id)arg1 key:(id)arg2;
- (id)_keyForDelegateID:(id)arg1;
- (void)_updateDisplayOrderForSources:(id)arg1 key:(id)arg2;
- (void)_updateStateForDisabledOrCollapsedItemWithUID:(id)arg1 delegateID:(id)arg2 state:(bool)arg3 withKey:(id)arg4 withNotification:(id)arg5;
- (id)calPreferences;
- (bool)checkedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2;
- (id)disabledCalendarsForDelegateWithUID:(id)arg1;
- (id)disabledCalendarsForMainWindow;
- (unsigned long long)displayOrderForAccountWithSourceIdentifier:(id)arg1;
- (id)displayOrderForAccounts;
- (unsigned long long)displayOrderForLocalGroupWithSourceIdentifier:(id)arg1;
- (bool)expandedStateForTopLevelNodeWithUID:(id)arg1;
- (id)init;
- (bool)invitationNotificationsDisabled;
- (void)setCalPreferences:(id)arg1;
- (void)setInvitationNotificationsDisabled:(bool)arg1;
- (void)setSharedCalendarNotificationsDisabled:(bool)arg1;
- (bool)sharedCalendarNotificationsDisabled;
- (void)updateCheckedStateForCalendarWithUID:(id)arg1 delegateID:(id)arg2 state:(bool)arg3;
- (void)updateDisplayOrderForAccountsWithSourceIdentifiers:(id)arg1;
- (void)updateDisplayOrderForLocalGroupsWithSourceIdentifiers:(id)arg1;
- (void)updateExpandedStateForTopLevelNodeWithUID:(id)arg1 state:(bool)arg2;

@end
