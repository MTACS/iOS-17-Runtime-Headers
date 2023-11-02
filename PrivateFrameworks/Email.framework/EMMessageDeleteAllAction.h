
@interface EMMessageDeleteAllAction : EMMessageChangeAction {
    NSArray * _mailboxObjectIDs;
}

@property (nonatomic, readonly, copy) NSArray *mailboxObjectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxes:(id)arg1 origin:(long long)arg2 actor:(long long)arg3 messageListItemsToExclude:(id)arg4;
- (id)mailboxObjectIDs;
- (long long)signpostType;

@end
