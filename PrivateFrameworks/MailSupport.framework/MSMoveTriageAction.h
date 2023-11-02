
@interface MSMoveTriageAction : MSTriageAction {
    bool  _copyMessages;
    EMMailbox * _destinationMailbox;
    long long  _destinationMailboxType;
    ECMessageFlagChange * _flagChange;
}

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4 destinationMailbox:(id)arg5 flagChange:(id)arg6 copyMessages:(bool)arg7;
- (id)initWithMessageListSelection:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 delegate:(id)arg4 destinationMailboxType:(long long)arg5 flagChange:(id)arg6 copyMessages:(bool)arg7;

@end
