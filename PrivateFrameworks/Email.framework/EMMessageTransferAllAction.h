
@interface EMMessageTransferAllAction : EMMessageTransferAction {
    NSArray * _mailboxObjectIDs;
}

@property (nonatomic, readonly, copy) NSArray *mailboxObjectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 destinationMailbox:(id)arg3 copyMessages:(bool)arg4 origin:(long long)arg5 actor:(long long)arg6;
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 specialDestinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(bool)arg5 origin:(long long)arg6 actor:(long long)arg7;
- (id)mailboxObjectIDs;
- (long long)signpostType;

@end
