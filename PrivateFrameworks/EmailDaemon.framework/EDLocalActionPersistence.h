
@interface EDLocalActionPersistence : NSObject <EFLoggable> {
    EDPersistenceDatabase * _database;
    EDGmailLabelPersistence * _gmailLabelPersistence;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)actionFlagsTableSchema;
+ (id)actionLabelsTableSchema;
+ (id)actionMessagesTableSchema;
+ (id)localMessageActionsTableSchema;
+ (id)log;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (bool)_addActionMessageForMessage:(id)arg1 destinationMessage:(id)arg2 actionID:(long long)arg3 actionPhase:(long long)arg4 connection:(id)arg5;
- (bool)_addActionMessageForSourceRemoteID:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (bool)_addFlagChange:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (void)_deleteCopyItems:(id)arg1 actionID:(long long)arg2 connection:(id)arg3;
- (void)_findMessagesForAction:(long long)arg1 remoteIDs:(id)arg2 messages:(id)arg3 connection:(id)arg4;
- (id)_flagChangeActionForRow:(id)arg1 connection:(id)arg2;
- (id)_flagChangeAllActionForRow:(id)arg1 connection:(id)arg2;
- (id)_flagChangeForAction:(long long)arg1 connection:(id)arg2;
- (id)_labelChangeActionForRow:(id)arg1 connection:(id)arg2;
- (bool)_setLabelsOnAction:(long long)arg1 labels:(id)arg2 add:(bool)arg3 connection:(id)arg4;
- (id)_sourceRemoteIDListForCopyItems:(id)arg1;
- (id)_transferActionForRow:(id)arg1 connection:(id)arg2 failedMessages:(id)arg3;
- (id)_transferUndownloadedActionForRow:(id)arg1 connection:(id)arg2;
- (void)_updateCopyItems:(id)arg1 toPhase:(long long)arg2 actionID:(long long)arg3 connection:(id)arg4;
- (id)_whereClauseToFindCopyItems:(id)arg1;
- (id)database;
- (id)gmailLabelPersistence;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2;
- (bool)mailboxURLIsInRemoteAccount:(id)arg1;
- (id)messageActionsForAccountURL:(id)arg1 previousActionID:(long long)arg2;
- (id)messageForDatabaseID:(long long)arg1;
- (bool)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;
- (bool)persistFlagChangeAction:(id)arg1;
- (bool)persistFlagChangeUndownloadedAction:(id)arg1;
- (bool)persistLabelChangeAction:(id)arg1;
- (bool)persistTransferAction:(id)arg1;
- (bool)persistTransferUndownloadedAction:(id)arg1;
- (void)removeMessageAction:(long long)arg1;
- (void)removeMessageActions:(id)arg1;
- (void)updateFlagChangeAction:(id)arg1 withRemainingUIDs:(id)arg2;
- (bool)updateTransferAction:(id)arg1 withResults:(id)arg2;
- (bool)updateTransferUndownloadedMessageAction:(id)arg1 withResults:(id)arg2;

@end
